#include<stdio.h>
typedef long long ll;
ll sumofFactors(ll n) ;
int main(){
int t=0;
scanf("%d",&t);

while(t-->0){
ll n=0;
scanf("%lld",&n);
ll ans=sumofFactors(n);
printf("%lld\n",ans);
printf("%lld\n",ans-n);
}
return 0;
}
ll sumofFactors(ll n) {
		// Traversing through all prime factors.
		if (n == 2) {
			return 3;
		}
		ll res = 1;
		for (ll i = 2; i*i<=n; i++) {

			ll curr_sum = 1;
			ll curr_term = 1;

			while (n % i == 0) {

				// THE BELOW STATEMENT MAKES
				// IT BETTER THAN ABOVE METHOD
				// AS WE REDUCE VALUE OF n. for more check PrimeFactorOfLargenumber
				n = n / i;

				curr_term *= i;
				curr_sum += curr_term;
			}

			res *= curr_sum;
		}

		// This condition is to handle
		// the case when n is a prime
		// number greater than 2
		if (n > 2)
			res *= (1 + n);

		return res;
	}
