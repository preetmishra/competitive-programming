#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    cin>>n;
    long int a[n][n];
    while(t--)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            cin>>a[i][j];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] == 0)
                {
                    for(int k = 0; k <= j; k++)
                    {
                        a[k][j] = 0;
                    }
                    for(int k = 0; k <= i; k++)
                    {
                        a[i][k] = 0;
                    }
                    i += 1;
                    j += 1;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
