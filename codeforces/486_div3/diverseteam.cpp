#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int n, k, rating;
    cin >> n >> k;
    unordered_map<int, bool> dikt;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (k == 0)
            break;

        cin >> rating;
        if (!dikt[rating])
        {
            dikt[rating] = true;
            ans.push_back(i + 1);
            k--;
        }
    }
    
    if (k != 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (auto x: ans)
            cout << x << " ";
        cout << endl;
    }
    
    return 0;
}