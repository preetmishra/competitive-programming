#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, num, test, count;
    cin>>n>>l;
    int a[l];
    long long int arr[n * 2];
    cin>>num;
    int i = l - 1;
    while(i >= 0)
    {
        a[i] = num % 10;
        num = num / 10;
        i--;
    }
    int j = 0;
    while(n--)
    {
        cin>>test;
        arr[j] = test;
        count = 0;
        i = l - 1;
        while(test > 0)
        {
            int p = test % 10;
            if(a[i] != p)
                count++;
            test = test / 10;
            i--;
        }
        arr[++j] = count;
        ++j;
    }
    int carr[n];
    j = 0;
    for(i = 1; i < (n * 2); i +=2)
    {
        carr[j] = arr[i];
        j++;
    }
    sort(carr, carr + n);
    int temp = carr[0];
    for(i = 1; i < (n * 2); i += 2)
    {
        if(temp == arr[i])
            break;
    }
    cout<<arr[i-1]<<endl;
    return 0;
}
