#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b % a, a);
}
int main()
{
    int t, n, div;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n], i;
        for(i = 0; i < n; i++)
            cin>>a[i];
        div = a[0];
        for(i = 0; i < n; i++)
            div = gcd(div, a[i]);
        for(i = 0; i < n; i++)
            cout<<a[i] / div<<" ";
        cout<<endl;
    }
    return 0;
}
