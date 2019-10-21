#include<iostream>
using namespace std;
int f;
long long int two(long long int n)
{

    if(!(n % 10))
        return 1;
    else
    {
        f++;
        two(n * 2);
    }
}
int main()
{
    int t, count;
    long long int x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        f = 0;
        if(x % 5 == 0)
        {
        two(x);
        cout<<f<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
