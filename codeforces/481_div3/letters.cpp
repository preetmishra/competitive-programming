#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int bs(int low, int high, int key, int arr[])
{
    int pos = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        
        if (key > arr[mid])
            low = mid + 1;
        else
        {
            pos = mid;
            high = mid - 1;
        }
    }

    return pos;
}

int32_t main()
{
    IOS;

    int n, m, x;
    cin >> n >> m;

    int dorms[n + 1], letters[m];
    dorms[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        dorms[i] = dorms[i - 1] + x;
    }
    for (int i = 0; i < m; i++)
        cin >> letters[i];

    for (auto letter: letters)
    {
        int dorm = bs(0, n, letter, dorms);
        int room = letter - dorms[dorm - 1];
        cout << dorm << " " << room << endl;
    }

    return 0;
}