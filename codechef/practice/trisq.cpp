#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t, b, div, sum;
    cin>>t;
    while(t--)
    {
        cin>>b;
        if(b <= 3)
            cout<<"0"<<endl;
        else
        {
            sum = 0;
            if(b % 2 == 0)
            {
                b = b - 2;
                div = b / 2;
                while(div > 0)
                {
                    sum += div;
                    div--;
                }
            }
            else
            {
                b = b - 3;
                div = b / 2;
                while(div > 0)
                {
                    sum += div;
                    div--;
                }

            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
