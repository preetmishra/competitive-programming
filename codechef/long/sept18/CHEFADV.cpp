#include<iostream>
using namespace std;
int main()
{
    int t, count;
    long long int N, M, X, Y;
    cin>>t;
    while(t--)
    {
    count = 0;
    cin>>N>>M>>X>>Y;
    if((((N - 1) % X) == 0) && (((M - 1) % Y) == 0))
        count = 1;
        else
            if((((N - 2) % X) == 0) && (((M - 2) % Y) == 0) && (N > 1) && (M > 1))
                count = 1;
    if(count == 1)
        cout<<"Chefirnemo"<<endl;
    else
        cout<<"Pofik"<<endl;
    }
    return 0;
}
