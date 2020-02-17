#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int n;
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), [](string s1, string s2){
        return s1.size() < s2.size();
    });

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1].find(arr[i]) == -1)
            return cout << "NO" << endl, 0;
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    
    return 0;
}
