#include <bits/stdc++.h>
using namespace std;
#define LOCAL 0
#define li long int
#define lli long long int
#define llu unsigned long long int
#define ld long double
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define sli(n) scanf("%ld",&n)
#define slli(n) scanf("%lld",&n)
#define slf(n) scanf("%lf",&n)
#define sf(n) scanf("%f",&n)
#define sllu(n) scanf("%llu",&n)
#define ss(n) scanf("%s",n)
#define PI 3.14159265359
 
const long double EPS = 1e-10;
const lli MOD = 1000000007ll;
const lli mod1 = 1000000009ll;
const lli mod2 = 1100000009ll;
 
int INF = (int)1e9;
lli INFINF = (lli)1e18;
int debug = 0;
 
void print(int a[],int s,int e){for(int i=s;i<=e;i++)cout<<a[i]<<" ";cout<<"\n";}
void print(vector<int> &v,int s,int e){for(int i=s;i<=e;i++)cout<<v[i]<<" ";cout<<"\n";}
void print(vector<int> &v){for(int x:v)cout<<x<<" ";cout<<"\n";}
void fastExecute(){ ios_base::sync_with_stdio(false);}
 
lli bit_count(lli _x){lli _ret=0;while(_x){if(_x%2==1)_ret++;_x/=2;}return _ret;}
lli bit(lli _mask,lli _i){return (_mask&(1<<_i))==0?0:1;}
lli powermod(lli _a,lli _b,lli _m){lli _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
lli add(lli a,lli b,lli m=MOD){lli x=a+b;while(x>=m)x-=m;return x;}
lli sub(lli a,lli b,lli m=MOD){lli x=a-b;while(x<0)x+=m;return x;}
lli mul(lli a,lli b,lli m=MOD){lli x=a*b;x%=m;return x;}
lli gcd(lli a,lli b){if(b==0)return a;return gcd(b,a%b);}
lli lcm(lli a,lli b){ return (a*b)/gcd(a,b);}
 
lli lp[1000005];
bool prime[1000005];
lli fact[2000005];
lli ncr(int n,int r)
{
 lli res = fact[n];
    lli ttt = (fact[n-r]*fact[r])%MOD;
    ttt = powermod(ttt,MOD-2,MOD);
 res = (res*ttt)%MOD;
 return res;
}
int main()
{
 fact[0] = 1;
 for(int i=1;i<2000005;i++)
 {
  fact[i] = (fact[i-1]*i)%MOD;
 }
 for(int i=0;i<1000005;i++)
 {
  lp[i] = i;
  prime[i] = true;
 }
 prime[0] = prime[1] = false;
 for(int i=2;i<sqrt(1000005);i++)
 {
  if(prime[i])
  {
   for(int j=i*i;j<1000005;j+=i)
   {
    prime[i] = false;
    lp[j] = min(lp[j],(lli)i);
   }
  }
 }
 
 int n,k;
 si(n);
 si(k);
 lli x;
 int a[1000005];
 memset(a,0,sizeof(a));
 for(int i=0;i<n;i++)
 {
  slli(x);
  while(x>1)
  {
   lli cnt = 0;
   lli t = lp[x];
   while(x%t==0)
   {
    x/=t;
    cnt++;
   }
   a[t] += cnt;
  }
 }
 lli ans = 1;
 for(int i=2;i<1000005;i++)
 {
  if(a[i]>0)
  {
   ans = (ans*ncr(a[i]+k-1,k-1))%MOD;
  }
 }
 printf("%d",ans);
 return 0;
}
