#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a, b;
    char c;
    cin>>a>>b>>c;
    switch(c)
    {
        case '+' : cout<<a + b<<endl; break;
        case '-' : cout<<a - b<<endl; break;
        case '*' : cout<<a * b<<endl; break;
        case '/' : cout<<fixed<<setprecision(6)<<a / b; break;
    }
    return 0;
}
