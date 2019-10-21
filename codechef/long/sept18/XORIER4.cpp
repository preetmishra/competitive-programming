#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n, i, j, k, res1, cnt1, cnt2, result, p, q, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        j = 0;
        k = 0;
        for(i = 0; i < n; i++)
        {

            if(a[i] % 2 == 0)
            {
                j++;
            }
            else
            {
                k++;
            }
        }
        res1 = ((((j * j) - j) / 2) + (((k * k) - k) / 2));
        long long int even[j], odd[k];
        p = 0;
        q = 0;
        for(i = 0; i < n; i++)
        {

            if(a[i] % 2 == 0)
            {
                even[p] = a[i];
                p++;
            }
            else
            {
                odd[q] = a[i];
                q++;
            }
        }
        sort(even, even + j);
        sort(odd, odd + k);
        cnt1 = 0;
        cnt2 = 0;
        i = 0;
        while(i < j)
        {
            x = 1;
            while( ( (even[i] == even[i + x]) || ( ( even[i] ^ even[i + x] ) == 2) ) )
                x++;
            if(x > 1)
            {
                cnt1 += ( (x - 1) * x) / 2 ;
                i = x + i - 1;
            }
            else
                i++;
        }
        i = 0;
        while(i < k)
        {
            x = 1;
            while( ( (odd[i] == odd[i + x]) || ( ( odd[i] ^ odd[i + x] ) == 2) ) )
                x++;
            if(x > 1)
            {
                cnt2 += ( (x - 1) * x) / 2 ;
                i = x + i - 1;
            }
            else
                i++;
        }

        result = (res1 - (cnt1 + cnt2));
        cout<<result<<endl;
    }
return 0;
}
