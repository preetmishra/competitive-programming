#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, j, i = 0, a[100], cnt = 0, temp = 0, p;
    cin>>n;
    while(n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for( j = 0 ; j < i; j++)
    cout<<a[j];
    for( j = 0; j < i; j++)
        {
            if(a[j] == 1)
                {
                    p = j;
                    while(a[++j] == 1)
                    {}
                    cnt = j - p;
                    if(cnt > temp)
                        temp = cnt;
                }
        }
    cout<<endl<<temp;
return 0;
}
