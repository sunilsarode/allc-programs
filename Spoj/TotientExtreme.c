#include<stdio.h>
void computeTotient(int n);
int MAX = 10001;
int phi[10002];
int main(){
		
		
		computeTotient(MAX);
		int t = 0;
		scanf("%d",&t);
		while (t-- > 0) {
			int n =0;
			scanf("%d",&n);
			long long int H=0;
			long long int sum=0;
				for (int i=1; i<=n; i++) {
					sum=sum+phi[i];
				}
				for (int j=1; j<=n; j++) {
						H = H + phi[j] * sum;
				}
			printf("%lld\n",H);	
		}
		
		
	
}
	 void computeTotient(int n) {

		
		for (int i = 1; i <= n; i++) {
			phi[i] = i;
		}
		for (int p = 2; p <= n; p++) {

			
			if (phi[p] == p) {

			
				phi[p] = p - 1;

			
				for (int i = 2 * p; i <= n; i += p) {

					phi[i] = (phi[i] / p) * (p - 1);
				}
			}
		}
	

	}

