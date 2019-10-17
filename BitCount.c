#include <stdio.h>
#include <string.h>

long long int countSetBits(long long int n)
{
    n = n - ((n >> 1) & 0x55555555);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n + (n >> 4)) & 0x0F0F0F0F;
    n = n + (n >> 8);
    n = n + (n >> 16);
    return n & 0x0000003F;
}

int main()
{

    long long int n=1000000000000000000;

    //scanf("%lld", &n);
    //printf("%lld\n", countSetBits(n)%1000000007);
    int j=0;
    long long int sum=0;
    for(j=0; j<n; j++)
    {
        sum=sum+(countSetBits(n)%1000000007);
    }
    printf("%lld\n",sum);
    return 0;
}
