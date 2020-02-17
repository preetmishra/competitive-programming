#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int i, n, k, ans;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    if (k == 0)
        ans = arr[0] - 1;
    else
        ans = arr[k - 1]; 

    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= ans)
        {
            count++;
        }
        else
            break;
    }
    
    if ((count != k) || !(1 <= ans && ans <= 1000 * 1000 * 1000))
        ans = -1;
    
    cout << ans << endl;
    
    return 0;
}