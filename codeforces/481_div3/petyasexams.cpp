#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool comp(pair<pair<int, int>, pair<int, int>> a, \
    pair<pair<int, int>, pair<int, int>> b)
{
    return a.second.first < b.second.first;
}

int32_t main()
{
    IOS;

    int n, m;
    cin >> n >> m;

    pair<pair<int, int>, pair<int, int>> isdc[m];
    for (int i = 0; i < m; i++)
    {
        isdc[i].first.first = i;
        cin >> isdc[i].first.second \
            >> isdc[i].second.first \
            >> isdc[i].second.second;
    }
    sort(isdc, isdc + m, comp);

    int ans[n + 1] = {0};
    for (int i = 0; i < m; i++) 
    {
        ans[isdc[i].second.first] = m + 1;
    }

    for (int i = 0; i < m; i++)
    {
        int idx, s, d, c;
        idx = isdc[i].first.first;
        s = isdc[i].first.second;
        d = isdc[i].second.first;
        c = isdc[i].second.second;

        for (int j = s; j < d; j++)
            if (ans[j] == 0 && c > 0)
            {
                ans[j] = idx + 1;
                c--;
            }

        if (c > 0)
        {   
            return cout << -1 << endl, 0;
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}