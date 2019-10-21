#include<iostream>
using namespace std;
int main()
{
    int t, arrSize, n, coinPos, ns, temp, cp, i;
    cin>>t;
    while(t--)
    {
        cin>>arrSize;
        int A[arrSize];
        cin>>coinPos;
        cp = coinPos - 1;
        cin>>ns;
        for(i = 0; i < arrSize; i++)
        {
            if(i == cp)
                A[i] = 1;
            else
                A[i] = 0;
        }
        while(ns--)
        {
            int a, b;
            cin>>a>>b;
            a -= 1;
            b -= 1;
            if(a == cp)
            {
                temp = A[a];
                A[a] = A[b];
                A[b] = temp;
                cp = a;
            }
            else
            {
                temp = A[a];
                A[a] = A[b];
                A[b] = temp;
                cp = b;
            }

        }
        for(i = 0; i < arrSize; i++)
        {
            if(A[i] == 1)
                break;
        }
        cout<<i+1<<endl;

    }
}
