#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        
        int arr[n], count[n] = {};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int residue = p;
        for (int i = n - 1; i >= 0; i--)
        {
            if (residue % arr[i] == 0)
            {
                count[i] = (residue / arr[i]) - 1;
                residue -= count[i] * arr[i];
            }
            else
            {
                count[i] = (residue / arr[i]) + 1;
                break;
            }
        }
        
        int produced = 0;
        for (int i = 0; i < n; i++)
            produced += arr[i] * count[i];
        
        if (produced <= p)
            cout << "NO" << endl;
        else
        {
            cout << "YES";
            for (int i = 0; i < n; i++)
                cout << " " << count[i];
            cout << endl;
        }
    }
    
    return 0;
}