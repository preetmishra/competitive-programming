#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int t, total = 0;
    cin >> t;
    while (t--)
    {
        int n, time, max_profit = -INT_MAX, profit = 0;
        char movie;
        int demands[4][4] = {};
        cin >> n;

        for (int req = 0; req < n; req++)
        {
            cin >> movie >> time;
            demands[(int)movie - 65][(time / 3) - 1] += 1;
        }

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                for (int k = 0; k < 4; k++)
                    for (int l = 0; l < 4; l++)
                        if (i != j && i != k && i != l && \
                            j != i && j != k && j != l && \
                            k != i && k != j && k != l && \
                            l != i && l != j && l != k)
                        {
                            int dem[4] = {
                                demands[0][i],
                                demands[1][j],
                                demands[2][k],
                                demands[3][l],
                            };
                            sort(dem, dem + 4);
                            profit = 100 * dem[3] \
                                    + 75 * dem[2] \
                                    + 50 * dem[1] \
                                    + 25 * dem[0];
                            for (int zero = 0; zero < 4; zero++)
                                if (dem[zero] == 0)
                                    profit -= 100;
                            
                            if (profit > max_profit)
                            {
                                max_profit = profit;
                            }
                        }

        total += max_profit;
        cout << max_profit << endl;
    }

    cout << total << endl;

    return 0;
}