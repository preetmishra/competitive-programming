#include<iostream>
using namespace std;
int main()
{
    int count = 0, t, n, s, j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count = 0;
        while(n--)
        {
            cin>>s>>j;
            if((j - s) > 5)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
