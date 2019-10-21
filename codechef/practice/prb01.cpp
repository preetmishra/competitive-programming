#include<iostream>
using namespace std;
int isprime(int n)
{
    int i;
    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isprime(n) == 1)
             cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
