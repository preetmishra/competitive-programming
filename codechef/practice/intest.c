#include<stdio.h>
int main()
{
    int i = 0, count = 0 ;
    int n, k;
    int t[50];
    scanf("%d %d", &n, &k);
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d", &t[i]);
    }
    for( i = 0 ; i < n ; i++)
    {
     if( t[i] % k == 0)
            count++;
    }
    printf("%d", count);
return 0;
}
