#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A, B;
    char C;
    cin>>A;
    cin>>B;
    cin>>C;
    switch (C)
    {
        case '+' : cout<<A + B;
                   break;
        case '-' : cout<<A - B;
                   break;
        case '*' : cout<<A * B;
                   break;
        case '/' : if(B != 0)
                   {
                      cout<<setprecision(2)<<double (A / B);
                   }
                   break;
        default : break;
    }
    return 0;
}
