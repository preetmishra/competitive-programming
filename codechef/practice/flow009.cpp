#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    double quan, price;
    cin>>t;
    while(t--)
    {
        cin>>quan>>price;
        if(quan > 1000)
        {
            quan *= price;
            cout<<fixed<<setprecision(6)<<double(quan - ((quan * 10) / 100))<<endl;


        }
        else
            cout<<fixed<<setprecision(6)<<double(quan * price)<<endl;
    }
    return 0;
}
