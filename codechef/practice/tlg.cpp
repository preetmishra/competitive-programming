#include <iostream>
using namespace std;
int main()
{
int cumOne = 0, cumTwo = 0, win, lead = 0, temp = 0;
int a, b, t;
cin>>t;
while(t--)
{
    cin>>a;
    cumOne += a;
    cin>>b;
    cumTwo += b;
    if(cumOne > cumTwo)
        temp = cumOne - cumTwo;
    else
        temp = cumTwo - cumOne;
    if(temp > lead)
    {
        lead = temp;
        if(cumOne > cumTwo)
            win = 1;
        else
            win =2;
    }
}
cout<<win<<" "<<lead;
return 0;
}




