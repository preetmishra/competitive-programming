#include <iostream>
using namespace std;
int main()
{
    int t, i, cnt = 0;
    long long int n, a[10];
    cin>>t;
    while(t--)
    {
        cin>>n;
        i = 0;
        while(n>0)
        {
            a[i] = n % 2;
            n = n / 2;
            i++;
        }
        while(i>0)
        {
           if(a[i] % 4 == 0)
            cnt;
            i--;
        }
        cout<<cnt;
    }
return 0;
}
