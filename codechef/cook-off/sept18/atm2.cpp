#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int i, n, amt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>amt;
        long long int a[n], b[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        for(i = 0; i < n; i++)
        {
            if(amt >= a[i])
            {
                amt -= a[i];
                b[i] = 1;
            }
            else
                b[i] = 0;
        }
        for(int i = 0; i < n; i++)
            cout<<b[i];
        cout<<endl;
    }
return 0;
}
