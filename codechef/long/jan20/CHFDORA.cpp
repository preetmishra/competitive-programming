#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int t;
    int n, m, count;
    int i, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int arr[n][m];
        for (i = 0; i < n; i++) 
            for (j = 0; j < m; j++)
                cin >> arr[i][j];

        count = n * m;
        for (i = 1; i < n - 1; i++)
        {
            for (j = 1; j < m - 1; j++)
            { 
                int slider = 1;
                while (((i - slider >= 0) && (i + slider < n)) \
                    && ((j - slider >= 0) && (j + slider < m)))
                {
                    if (arr[i - slider][j] == arr[i + slider][j] \
                        && arr[i][j - slider] == arr[i][j + slider])
                    {
                        count++;
                        slider++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}