#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long t,n,k,i;
    unsigned long long ar[100002];
    unsigned long long sum,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
            cin>>ar[i];
        sum=0;
        m=0;
        for(i=0; i<n; i++)
        {
            if(ar[i]<=k)
                sum+=ar[i];
            else
            {
                m=max(m,sum);
                sum=0;
            }
        }

        printf("%llu\n",m);
    }
    return 0;
}
