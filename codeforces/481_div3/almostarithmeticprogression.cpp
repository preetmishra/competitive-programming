#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int count_changes(int i, int j, int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0] + i;
    temp[1] = arr[1] + j;

    int count = abs(i) + abs(j);
    int d = temp[1] - temp[0];
    for (int i = 2; i < n; i++)
    {
        temp[i] = arr[i];
        int diff = temp[i] - temp[i - 1];
        if (diff != d)
        {
            count++;

            if (diff + 1 == d)
                temp[i]++;
            else if (diff - 1 == d)
                temp[i]--;
            else
                return INT_MAX;
        }
    }

    return count;
}

int32_t main()
{
    IOS;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    if (n <= 2)
        return cout << "0" << endl, 0;

    int min_changes = INT_MAX;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            {
                int changes = count_changes(i, j, arr, n);
                min_changes = min(changes, min_changes);
            }
    
    if (min_changes == INT_MAX) 
        cout << "-1" << endl;
    else
        cout << min_changes << endl;

    return 0;
}