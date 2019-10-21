#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int n, count, l;
    map <int, string> map1;
    string num, test;
    cin>>n>>l;
    int k = n;
    int g[n];
    cin>>num;
    int p = 0;
    while(n--)
    {
        cin>>test;
        count = 0;
        int i = 0;
        while(i < l)
        {
        if(num[i] != test[i])
            count++;
        i++;
        }
        g[p] = count;
        map1[count] = test;
        p++;
    }
    sort(g, g + k);
    int temp = g[0];
    cout<<map1[temp]<<endl;
    return 0;
}
