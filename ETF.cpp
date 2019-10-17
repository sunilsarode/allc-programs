#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
ll power(ll x, ll y) {
ll p = 1, q = x;
    while(y > 0) {
        if(y%2 == 1) {
            p=(p*q);
            if(p>mod) p%=mod;
        }
        q = (q*q);
        if(q>mod) q%=mod;
        y /= 2;
    }
    return p;
}
ll prime[1000002];
vector<ll>p;
void solve()
{
    ll i,j;
    for(i = 1LL; i <= 1000000LL; i++) {
        prime[i] = i;
    }
    for(i = 2LL; i <= 1000000LL; i++) {
        if(prime[i] == i) {
            for(j = 2; j*i <= 1000000LL; j++) {
                prime[j*i] = (i-1)*prime[j*i]/i;   
            }
            prime[i] = i-1;
            p.push_back(i);
        }
    }
}
ll arr[100005],brr[100005];
int main() 
{
 
    solve();
    int t;
    cin>>t;
    ll l = p.size();
    while(t--) {
     ll x,y,c,i,j,q,k;
     cin>>x>>y>>k;
     c = 0;
     if(y <= 1000000) {
         for(i = x; i <= y; i++) {
          if(prime[i]%k == 0) {
           c++;
          }
         }
      printf("%.6lf\n",(double)(c)/(double)(y-x+1));
         continue;
     }
     for(i = x; i <= y; i++) {
         arr[i-x] = i;
         brr[i-x] = i;
     }
     for(i = 0; i < l; i++) {
         q = (x/p[i])*p[i];
         for(j = q; j <= y; j += p[i]) {
             if(j < x) {
                 continue;
             }
             while(brr[j-x]%p[i] == 0) {
                 brr[j-x] /= p[i];
             }
             arr[j-x] /= (p[i]);
             arr[j-x] *= (p[i]-1);
         }
     }
     for(i = x; i <= y; i++) {
         if(arr[i-x] == i) {
             arr[i-x] = i-1;
             if(arr[i-x]%k == 0) {
              c++;
             }
             continue;
         }
         else if(brr[i-x] != 1) {
             arr[i-x] /= brr[i-x];
             arr[i-x] *= (brr[i-x]-1);
         }
         if(arr[i-x]%k == 0) {
          c++;
         }
     }
     printf("%.6lf\n",(double)(c)/(double)(y-x+1));
    }
 return 0;
}
