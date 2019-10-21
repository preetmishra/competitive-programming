#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n, i, count1, count2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count1 = 0;
        count2 = 0;
        long long int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        sort(a, a + n);
        for(i = 0; i < n; i++)
        {
            if(a[i] > n)
            {
                a[i] = 0;
                count1++;
            }
        }
        for(i = 0; i < n; i++)
        {
            if(a[i] > 0)
            {
                if(a[i] == a[i + 1])
                count2++;
            }
        }
        cout<<count1 + count2<<endl;
    }
    return 0;
}