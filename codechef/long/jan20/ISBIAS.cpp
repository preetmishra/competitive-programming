#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int n, q, l, r;
    string ans;
    cin >> n >> q;
    int arr[n];
    int build[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            if (arr[i] > arr[i + 1])
                build[i] = -1;
            else
                build[i] = 1;
        else if (i == n - 1)
            if (arr[i] > arr[i - 1])
                build[i] = 1;
            else
                build[i] = -1;
        else
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                build[i] = 2;
            else if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
                build[i] = -2;
            else if (arr[i] < arr[i + 1])
                build[i] = 1;
            else if (arr[i] > arr[i + 1])
                build[i] = -1;
    }

    while (q--) 
    {
        cin >> l >> r;
        l = l - 1;
        r = r - 1;

        if ((build[l] == 2 && (build[r] == 1 || build[r] == 2)) \
            || (build[l] == 1 && (build[r] == -1 || build[r] == -2)) \
            || (build[l] == -2 && (build[r] == -1 || build[r] == -2)) \
            || (build[l] == -1 && (build[r] == 1 || build[r] == 2)))
            ans = "YES";
        else
            ans = "NO";
        
        cout << ans << endl;
    }

    return 0;
}