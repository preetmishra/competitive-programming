#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int t;
    int n, a, s, b, c, d, e, result;
    int magic;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> a;
        magic = pow(10, n);
        s = a + (2 * magic);
        cout << s << endl; 
        cout << flush;
        cin >> b;
        c = magic - b;
        cout << c << endl;
        cout << flush;
        cin >> d;
        e = magic - d;
        cout << e << endl;
        cout << flush;
        cin >> result;

        if (result == -1)
        {
            return 0;
        }
    }

    return 0;
}