#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n, l, num, test, count;
    map<int, int> map1;
    cin>>n>>l;
    int a[l], g[n];
    cin>>num;
    int i = l - 1;
    while(i >= 0)
    {
        a[i] = num % 10;
        num = num / 10;
        i--;
    }
    int x = 0;
    while(n--)
    {
        cin>>test;
        int p = test;
        count = 0;
        i = l - 1;
        while(test > 0)
        {
            if(a[i] != (test % 10))
                count++;
            test = test / 10;
            i--;
        }
        g[x] = count;
        map1[count] = p;
        x++;
    }
    int temp = g[0];
    for(i = 0; i < (x - 1); i++)
    {
        if(temp > g[i])
            temp = g[i];

    }
    cout<<map1[temp]<<endl;
    return 0;
}
