#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    double sal, gs, bs, hra, da;
    cin>>t;
    while(t--)
    {
        cin>>bs;
        if(bs < 1500)
        {
            hra = 0.10 * bs;
            da = 0.90 * bs;
            gs = bs + hra + da;
        }
        else
        {
            hra = 500;
            da = 0.98 * bs;
            gs = bs + hra + da;
        }
        cout<<fixed<<setprecision(2)<<gs<<endl;
    }
    return 0;
}
