#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n, p, s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p = 0;
        while(n > 0)
        {
            s = n % 10;
            n = n / 10;
            p = (p * 10) + s;
        }
        cout<<p<<endl;
    }
}
