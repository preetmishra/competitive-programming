#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n, k, i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[k];
        for(i = 0; i < k; i++)
        {
            a[i] = n % (i + 1);
        }
        sort(a, a + k, greater<int>());
        cout<<a[0]<<endl;
    }
    return 0;
}
