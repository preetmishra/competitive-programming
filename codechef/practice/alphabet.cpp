#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s, w;
    int n;
    cin>>s;
    cin>>n;
    while(n--)
    {
        int count = 0;
        cin>>w;
        for(int i = 0; i < w.length(); i++)
        {
            for(int j = 0; j < s.length(); j++)
            {
                if(w[i] == s[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count == w.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
