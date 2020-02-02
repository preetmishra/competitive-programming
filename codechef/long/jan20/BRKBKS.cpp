#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int t;
    int s, w1, w2, w3;
    cin >> t;
    while (t--)
    {
        cin >> s >> w1 >> w2 >> w3;

        int count = 0;
        int total = w1 + w2 + w3;
        if (s >= total)
            count = 1;
        else if (s >= total - w3)
            count = 2;
        else if (s >= total - w1)
            count = 2;
        else
            count = 3; 
        
        cout << count << endl;
    }

    return 0;
}