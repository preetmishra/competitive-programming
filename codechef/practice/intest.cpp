#include <iostream>
using namespace std;
int main()
{
    long long int n, k;
    cin>>n>>k;
    int count = 0;
    long long int t[n];
    for(int i = 0; i < n; i++)
    cin>>t[i];
    for(int i = 0; i < n; i++)
        if(t[i] % k == 0)
            count++;
    cout<<count;

return 0;
}
