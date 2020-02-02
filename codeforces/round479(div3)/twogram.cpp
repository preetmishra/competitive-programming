#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    map<string, int> dikt;
    int n;
    string s;

    cin >> n >> s;

    for (int i = 0; i < n - 1; i++)
    {
        string temp = s.substr(i, 2);
        if (dikt.count(temp) != 0)
            dikt[temp] += 1;
        else
            dikt[temp] = 1;
    }

    int max = 0;
    string ans;
    for(auto itr = dikt.begin(); itr != dikt.end(); itr++)
    {
        if ((itr -> second) > max)
        {
            max = itr -> second;
            ans = itr -> first;
        }
    }

    cout << ans << endl;
    
    return 0;
}