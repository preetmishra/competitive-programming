#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int k, n, sum;
    cin>>t>>k;
    while(t--)
    {
    cin>>n;
    sum = 0;
    long long int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if(sum > k)
        cout<<"FAILURE"<<endl;
    else
        cout<<"SUCCESS"<<endl;
    }
    return 0;
}
