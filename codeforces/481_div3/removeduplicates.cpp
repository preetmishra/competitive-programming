#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    list<int> unique;
    map<int, bool> visited;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)    
        cin >> arr[i];

    for (int i = n - 1; i >= 0; i--) 
    {
        if (!visited[arr[i]])
        {
            unique.push_front(arr[i]);
            visited[arr[i]] = true;
        }
    }

    cout << unique.size() << endl;
    for (auto x: unique)
        cout << x << " ";
    cout << endl;

    return 0;
}