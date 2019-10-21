#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    float h, d, u;
    cin>>t;
    while(t--)
    {
        cin>>h>>d>>u;
        if(sqrt(h / 5) >= (d / u))
            cout<<"Ran away"<<endl;
        else
            cout<<"Caught"<<endl;
    }
    return 0;
}
