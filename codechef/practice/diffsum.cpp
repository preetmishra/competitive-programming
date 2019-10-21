#include<iostream>
using namespace std;
int main()
{
    int l, b;
    cin>>l>>b;
    if(l > b)
        cout<<l - b<<endl;
    else
        cout<<l + b<<endl;
    return 0;
}
