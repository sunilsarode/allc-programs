#include<stdio.h>
long long int modularExponentiation(long long int x,long long int n,long long int M);
long long int modInverse(long long int A, long long int M);
long long int d,x,y;
int main()
{

    long long int a=0,b=0,c=0,m=0;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&m);
    long long int  ans=modularExponentiation(a,b,m);
    long long int ans1=modInverse(c,m);

    printf("%lld",(ans*ans1)%m);
    return 0;
}
long long int modularExponentiation(long long int x,long long int n,long long int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
void extendedEuclid(int A, int B)
{
    if(B == 0)
    {
        d = A;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
long long int modInverse(long long int A, long long int M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}
