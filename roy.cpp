#include<bits/stdc++.h>
using namespace std; long int a[1000010],mod=1000000007;
long int fact(long int n)
{   long int i;
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        a[i]=i*a[i-1];
        a[i]=a[i]%mod;
    }
}
 long int modularExponentiation(long int x,long int n,long int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;
 
}
int main()
{
    fact(1000004);
    int t;
    cin>>t;
    while(t--)
    {
        long int i,k=0,j,r,m,b[30]={0};
        long int fc=0,fv=0;
        string s;
        cin>>s;
        m=s.length();
        i=0;
        while(s[i]!='\0')
        {   b[s[i]-'a']++;
            if( s[i]=='u' || s[i]=='o' || s[i]=='i' || s[i]=='e' || s[i]=='a')
                k++;
                i++;
        }
        m=m-k;
        if(m+1<k)
            cout<<"-1"<<endl;
        else
        {
            fc=a[m];
            fc=fc%mod;
            fv=a[m+1]*modularExponentiation(a[m+1-k],mod-2,mod);
            fv=fv%mod;
            for(i=0;i<26;i++)
            {
                if(i==0 || i==4 || i==8 || i==14 || i==20)
                {
                    fv=fv*modularExponentiation(a[b[i]],mod-2,mod);
                    fv=fv%mod;
                }
                else
                {
                    fc=fc*modularExponentiation(a[b[i]],mod-2,mod);
                    fc=fc%mod;
                }
            }
            long int aa=(fc*fv)%mod;
            cout<<aa<<endl;
        }
        }
}
