#include<iostream>
using namespace std;
int main()
{
    int t, n, m, k, temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(n < m)
        {
            temp = m;
            m = n;
            n = temp;
        }
        if(k >= (n - m))
            cout<<"0"<<endl;
        else
        {
            m += k;
            cout<<n - m<<endl;
        }
    }
    return 0;
}
