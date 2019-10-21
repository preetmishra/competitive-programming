#include <iostream>
using namespace std;
int main()
{
    int t, a[100], i, j, count;
    long long int n;
    cin>>t;
    while(t--)
        {
            cin>>n;
            i = 0;
            count = 0;
            while(n > 0)
            {
                a[i] = n % 10;
                n = n / 10;
                i++;
            }
            j = 0;
            while( j < i)
            {
                if(a[j] == 4)
                    count++;
                j++;
            }
            cout<<count<<endl;
        }
return 0;
}
