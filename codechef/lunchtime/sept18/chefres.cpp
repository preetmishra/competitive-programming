#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n, m;
    long long int i, j, p, count1, count2, newm, newn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>m;
        long long int l[n], r[n], res[m];
        j = 0;
        for(i = 0; i < n; i++)
            {
                cin>>l[i]>>r[i];
            }
        j = 0;
        sort(l, l + n);
        sort(r, r + n);
        newm = m;
        newn = n - 1;
        while(m--)
        {
            count1 = 0;
            count2 = 0;
            cin>>p;
            for(i = 0; i < n; i++)
            {
                if( (p >= l[i]) && (p < r[i]))
                {
                    res[j] = 0;
                    j++;
                    count1 = 1;
                    break;
                }
                else
                    if(p == r[i] && ( p < r[newn]))
                    {
                        count2 = 1;
                        res[j] = l[i + 1] - r[i];
                        j++;
                        break;
                    }
                else
                    if( (p > r[i]) && ( p < l[i + 1]) && (p < r[newn]))
                    {
                        count2 = 1;
                        res[j] = l[i + 1] - p;
                        j++;
                        break;
                    }
                else
                    if(p < l[0])
                    {
                        res[j] = l[0] - p;
                        j++;
                        count1 = 1;
                        break;


                    }
            }
            if((count1 == 0) && (count2 == 0))
            {
                res[j] = -1;
                j++;
            }

        }
        for(i = 0; i < newm; i++)
        cout<<res[i]<<endl;
    }
    return 0;
}
