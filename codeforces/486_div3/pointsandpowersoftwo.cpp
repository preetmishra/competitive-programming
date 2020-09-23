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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    vector<int> ans = {arr[0]};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            int left = arr[i] - (1 << j);
            int right = arr[i] + (1 << j);
            bool is_left = binary_search(arr.begin(), arr.end(), left);
            bool is_right = binary_search(arr.begin(), arr.end(), right);

            if (is_left && is_right && (int)ans.size() < 3)
                ans = {left, arr[i], right};
            if (is_left && (int)ans.size() < 2)
                ans = {left, arr[i]};
            if (is_right && (int)ans.size() < 2)
                ans = {arr[i], right};
        }
    }

    cout << (int)ans.size() << endl;
    for (auto x: ans)
        cout << x << " ";
    cout << endl;

    return 0;
}