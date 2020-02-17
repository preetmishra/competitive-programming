#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool is_leap(int year)
{
    return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

int which_day(int date, int month, int year)
{
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;

    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + date) % 7;
}

int count_valid_months(int start, int end)
{
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        if ((is_leap(i) && which_day(1, 2, i) == 6) \
            || (!is_leap(i) && (which_day(1, 2, i) == 0 || which_day(1, 2, i) == 6)))
            count++;
    }

    return count;
}

int32_t main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
    {
        int m0, y0, m1, y1;
        int differ, complete, ans = 0;
        cin >> m0 >> y0;
        cin >> m1 >> y1;

        y0 += m0 > 2;
        y1 -= m1 < 2;

        differ = y1 - y0;
        complete = differ / 400;
        
        ans = complete * count_valid_months(y0, y0 + 399);
        ans += count_valid_months(y0 + (complete * 400), y1);

        cout << ans << endl;
    }

    return 0;
}