#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100000000
typedef long long ll;
ll primes[MAX+1];
int pcount[MAX+1];
void seive();
ll power(ll x,ll n,ll m);
ll ans(ll n,ll m);


ll ans(ll n,ll m){
    ll result=1;
    ll gPrime=0;
    for(int i=0;i<5761455&&primes[i]<=n; ++i) {
        ll sqt=sqrt(n);
        ll k=primes[i];
        if(k<=sqt){      
           
         ll count=0;
         while(n/k){
             count=(count+(n/k))%m;
             k=(k*primes[i]);
         }
           result=(result*((count+1)%m))%m;
        }else{
           gPrime=k;
           break;
        }   
    }
    //printf("%lld\n",result);
    int s=n/gPrime;
    printf("%d\n",s);
    for(s;s>=1;s--){
        ll exp=pcount[n/s]-pcount[n/(s+1)];
	//printf("%lld\n",exp);
        ll pval=power(s+1,exp,m);
        //printf("%lld\n",pval);
        result=(result*pval)%m;
        printf("%lld\n",result);
    }
    return result;
}
ll power(ll x,ll n,ll m)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%m;
        x=(x*x)%m;
        n=n/2;
    }
    return result;
}

int main(){
    seive();
    int t=0;
    scanf("%d",&t);
    while(t-->0){
         ll n=0;
         ll m=0;
         scanf("%lld",&n);
         scanf("%lld",&m);
         ll numDiv=ans(n,m);
         printf("%lld\n",numDiv);
    }
    
    return 0;
}
void seive(){
int *nums;
nums = malloc(sizeof(int)*(MAX+1));
int l=sqrt(MAX);
int n=2;


while (n <= l) {	
	for (int i = 2 * n; i <=MAX; nums[i] = 1, i += n);
	for (n++; nums[n]; n++);
}

	for (int i = 2, k = 0; i <MAX+1; i++) {
		if (!nums[i]) {
			primes[k++] = i;
		}
	}
//printf("%lld",primes[100000000]);
pcount[2]=1;
for(int i=3;i<=MAX;i++){

pcount[i]=pcount[i-1]+(!nums[i]);
}
//printf("%d\n",pcount[9]-pcount[4]);
}
