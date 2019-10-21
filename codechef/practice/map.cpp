#include<iostream>
#include<map>
using namespace std;
int main()
{
int n;
string s;
long num;
map<string /*key*/, long /*value*/> name_map;
cin>>n;
while(n>0)
    {
        cin>>s;
        cin>>num;
        name_map[s] = num;
        n--;
    }
cout<<s<<"="<<name_map[s];
return 0;
}


