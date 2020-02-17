#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int potential_programmers(int start, int end, int arr[], int key)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] >= key)
            end = mid - 1;
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    
    return ans + 1;
}

int32_t main()
{
    IOS;

    int n, m, x, y; 
    cin >> n >> m;

    int arr[n], sorted[n], ans[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i], sorted[i] = arr[i];

    sort(sorted, sorted + n);
    for (int i = 0; i < n; i++)
        ans[i] = potential_programmers(0, n - 1, sorted, arr[i]);
    
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--, y--;
        if (arr[x] > arr[y])
            ans[x] = max((int)0, --ans[x]);
        else if (arr[y] > arr[x])
            ans[y] = max((int)0, --ans[y]);
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    
    return 0;
}