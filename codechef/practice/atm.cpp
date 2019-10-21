#include<iostream>
using namespace std;
int main()
{
int widr; float amt;
cin>>widr;
cin>>amt;
if((widr+0.50<=amt) && (widr%5==0))
{
    cout<<float(amt-widr-0.50);
}
else
    cout<<amt;
return 0;
}
