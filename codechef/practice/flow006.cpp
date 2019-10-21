#include<iostream>
using namespace std;
int main()
{
    long long int n, t, i = 0, s, sum;
    cin>>t;
    while(t--)
        {   sum = 0;
            cin>>n;
            while(n > 0)
            {
                s = n %  10;
                n = n / 10;
                sum += s;
            }
          cout<<sum;
        }
return 0;
}
