#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int t, n;
    cin >> t; 

    while (t--)
    {
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);

        int ans = 0;
        for (int i = 0; i < n; i++) 
            ans += min(arr1[i], arr2[i]);

        cout << ans << endl;
    }
    
    return 0;
}