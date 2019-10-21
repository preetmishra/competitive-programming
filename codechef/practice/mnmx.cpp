#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n], i;
        for(i = 0; i < n; i++)
            cin>>a[i];
        sort(a, a + n);
        cout<<(a[0] * (n - 1))<<endl;
    }
    return 0;
}
