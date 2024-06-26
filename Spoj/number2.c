#include<stdio.h>
#include<stdlib.h>

#define ll long long
ll lcm(ll a, ll b);
int main(){
	
	int t=0;
	scanf("%d",&t);
	
	
	while(t-->0){
		ll a=0;
		ll b=0;
		ll n=0;
	
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&n);	
		
		ll low =1;
		ll high=1000000000000000000LL;
		ll mid=0;
		ll ans=0;
		ll lcm1=lcm(a,b);
		while(low<=high){
			
			mid = low + (high - low) / 2;

			ll term = (mid / a) + (mid / b) - (mid / lcm1);

			if (term >= n) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
			
		}
		
		printf("%lld\n",ans);
		
	}
	
	return 0;
}
	ll gcd(ll a, ll b)
    {
        if (a == 0)
            return b;
        return gcd(b%a, a);
    } 

	// method to return LCM of two numbers
	 ll lcm(ll a, ll b) {
		return (a * b) / gcd(a, b);
	}
