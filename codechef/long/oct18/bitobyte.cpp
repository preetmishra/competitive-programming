#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, x, y, c1, c2, c3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x = n % 26;
        y = n / 26;
        c1 = 0;
        c2 = 0;
        c3 = 0;
        if(x == 0)
            c3 = pow(2, y - 1);
        else
            if((x == 1) || (x == 2))
                c1 = pow(2, y);
            else
                if((x > 2) && (x < 11))
                    c2 = pow(2, y);
                else
                    c3 = pow(2, y);
        cout<<c1<<" "<<c2<<" "<<c3<<endl;
    }
    return 0;
}
