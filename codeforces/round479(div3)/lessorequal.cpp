#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int i, n, k, ans = -1;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (i = 0; i < n; i++)
    {
        if (k != 0)
        {
            ans = arr[i];
            k -= 1;
        }
        else
            break;
        
    }
    
    if (arr[i] == arr[i - 1])
        ans = -1;
    
    cout << ans << endl;
    
    return 0;
}