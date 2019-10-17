#include <stdio.h>
int main()
{
    int n,k=0;
    unsigned long sum=0;
    unsigned long mod=1e9+7;

    scanf("%d%d",&n,&k);
    unsigned long arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%lu",&arr[i]);
    }

    for(int i=0; i<n-k+1; i++)
    {
        for(int j=1; j<=k; j++)
        {
            sum=(sum+(j*j*arr[j+i-1]))%mod;
        }
        printf("%lu",sum);
        printf(" ");
        sum=0;
    }

    return 0;
}
