#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    vector<int> count;
    int n, marker = 0, run = 0, ans = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
            run++;
        else
        {
            count.push_back(run);
            run = 0;
            marker++;
        }
    }
    count.push_back(run);

    for (auto x: count)
        if (x > 2) 
            ans += x - 2;
    cout << ans << endl;

    return 0;
}