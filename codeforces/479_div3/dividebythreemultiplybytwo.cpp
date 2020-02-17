#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

unordered_map<int, bool> visited;
list<int> topsorted;

void dfs(unordered_map<int, vector<int>> adjlist, int src)
{
    visited[src] = true;
    for (auto neighbour: adjlist[src])
        if (!visited[neighbour])
            dfs(adjlist, neighbour);
    topsorted.push_front(src);
}

void topsort(unordered_map<int, vector<int>> adjlist)
{
    for (auto itr = adjlist.begin(); itr != adjlist.end(); itr++)
    {
        if (!visited[itr -> first])
            dfs(adjlist, itr -> first);
    }
}

int32_t main()
{
    IOS;

    int n;
    unordered_map<int, bool> dikt;
    cin >> n;
    
    unordered_map<int, vector<int>> adjlist;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dikt[arr[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (dikt[arr[i] * 2])
            adjlist[arr[i]].push_back(arr[i] * 2);
        if (arr[i] % 3 == 0 && dikt[arr[i] / 3])
            adjlist[arr[i]].push_back(arr[i] / 3);
    }

    topsort(adjlist);
    for (auto value: topsorted)
        cout << value << " ";
    cout << endl;

    return 0;
}