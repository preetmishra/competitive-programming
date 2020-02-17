#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    vector<pair<int, pair<int, int>>> triples;
    int k, n, sum;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        vector<int> sequence(n);
        for (int j = 0; j < n; j++)
            cin >> sequence[j];
        
        sum = accumulate(sequence.begin(), sequence.end(), 0);
        for (int j = 0; j < n; j++)
            triples.push_back(make_pair(sum - sequence[j], make_pair(i, j)));
    }

    stable_sort(triples.begin(), triples.end());
    for (int i = 0; i < ((int)triples.size()) - 1; i ++)
    {
        if (triples[i].first == triples[i + 1].first \
            && (triples[i].second.first != triples[i + 1].second.first))
        {
            cout << "YES" << endl;
            cout << triples[i + 1].second.first + 1 \
                << " " << triples[i + 1].second.second + 1 << endl;
            cout << triples[i].second.first + 1 \
                << " " << triples[i].second.second + 1 << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}