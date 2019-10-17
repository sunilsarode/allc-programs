#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100000000
typedef long long ll;
ll primes[5761455];
void seive();
void calculate(ll prime,int count);
ll binaryExponentiation(long x, int n);
ll ans=1;
int main(){
seive();
int t=0;
scanf("%d",&t);


while(t-->0){
ll n=0;
scanf("%lld",&n);
ll copy=n;
//printf("%lld",primes[5761454]);

for (int j = 0; j < 5761455 && primes[j] * primes[j] <= n; j++) {

  if (n % primes[j] == 0) {
	int count = 0;
	while (n % primes[j] == 0) {
		count++;
		n /= primes[j];
	}
	calculate(primes[j], count);
  }
}
if (n > 1) {
   ans=ans*(n+1);
}
//printf("%lld\n",ans);
printf("%lld\n",ans-copy);
ans=1;

}

return 0;
}

void calculate(ll prime,int count){
  
  ll value=binaryExponentiation(prime,count+1)-1;
  value=value/(prime-1);
  ans=ans*value; 
  
}
ll binaryExponentiation(long x, int n) {
		ll result = 1;
		while (n > 0) {
			if (n % 2 == 1)
				result = result*x;
			x = x * x;
			n = n / 2;
		}
		return result;
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

}
