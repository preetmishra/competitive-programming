#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[5];
for(int i = 0; i < 5; i++)
    cin>>a[i];
cout<<*a<<endl;
cout<<*(a+5);
return 0;
}
