#include<bits/stdc++.h>
using namespace std;
//gcd function
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b % a, a);
}
int main()
{
    int t;
    long long int a, b, gd, lcm;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        gd = gcd(a, b);
        lcm = (a * b) / gd;
        cout<<gd<<" "<<lcm<<endl;
    }
    return 0;
}
