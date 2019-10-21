#include<iostream>
using namespace std;
int main()
{
    long long int t, p1, p2, k, c, d;
    cin>>t;
    while(t--)
    {
        cin>>p1>>p2>>k;
        c = (p1 + p2) / k;
        d = c % 2;
        if(d == 0)
            cout<<"CHEF"<<endl;
        else
            cout<<"COOK"<<endl;
    }
    return 0;
}
