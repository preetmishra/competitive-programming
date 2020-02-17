#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    map<int, int> dp;
    int n, ans = 0, last;
    cin >> n;
    
    list<int> subseq;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dp[arr[i]] = dp[arr[i] - 1] + 1;
        if (dp[arr[i]] > ans)
        {
            ans = dp[arr[i]];
            last = arr[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == last)
        {
            subseq.push_front(i + 1);
            last--;
        }
    }

    cout << ans << endl;
    for (auto x: subseq)
        cout << x << " ";
    cout << endl;

    return 0;
}