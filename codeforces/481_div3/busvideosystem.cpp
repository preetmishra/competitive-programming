#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int n, w;
    cin >> n >> w;
    
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int _max = INT_MIN, _min = INT_MAX, left = 0, right;
    int accum = 0;
    for (int i = 0; i < n; i++)
    {
        accum += arr[i];
        _max = max(_max, accum);
        _min = min(_min, accum);
    }
    
    if (_max > w)
        return cout << 0 << endl, 0;

    if (_min < 0)
        left = -_min;
    if (_max <= 0)
        right = w;
    else
        right = w - _max;
    
    if (left > right)
        return cout << 0 << endl, 0;
    else
        cout << right - left + 1 << endl;

    return 0;
}