#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 200 * 1000 + 11;

int deg[N] = {};
bool visited[N];
vector<int> comp;
vector<int> adjlist[N];

void dfs(int src)
{
    visited[src] = true;
    comp.push_back(src);
    
    for (auto neighbour: adjlist[src])
        if (!visited[neighbour])
            dfs(neighbour);
}

int32_t main()
{
    IOS;

    int n, m;
    int v, u;
    int count = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> v >> u;
        --v, --u;
        adjlist[v].push_back(u);
        adjlist[u].push_back(v);
        ++deg[v];
        ++deg[u];
    }    

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            
            bool flag = true;
            for (auto vertex: comp)
                flag &= deg[vertex] == 2;

            if (flag)
                count++;

            comp.clear();
        }
    }

    cout << count << endl;
    
    return 0;
}