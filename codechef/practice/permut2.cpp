#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n, i, value, j, flag, cnt;
    while(1)
    {
        cin>>n;
        if(n == 0)
            break;
        else
        {
            long a[n], b[n];
            for(i = 0; i < n; i++)
                cin>>a[i];
            for(i = 0; i < n; i++)
            {
                value = a[i];
                b[value - 1] = i + 1;
            }
            flag = 0;
            /*for(i = 0; i < n; i++)
                cout<<b[i]<<" ";
                cout<<endl;*/
            for(i = 0; i < n; i++)
            {
                if(a[i] != b[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout<<"ambiguous"<<endl;
            else
                cout<<"not ambiguous"<<endl;
        }
    }
    return 0;
}
