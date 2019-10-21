#include<iostream>
using namespace std;
int main()
{
    int t, count, i, mul;
    int a[6] = { 100, 50, 10, 5, 2, 1};
    long long int n;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin>>n;
        i = 0;
        while(n > 0)
        {
            if(n >= a[i])
            {
            count += n / a[i];
            n = n % a[i] ;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}
