#include<stdio.h>
void computeTotient(int n);
int MAX = 1000001;
int phi[1000002];
int main(){
		
		
		 computeTotient(MAX);
		int t = 0;
		scanf("%d",&t);
		while (t-- > 0) {
			int n =0;
			scanf("%d",&n);
			printf("%d\n",phi[n]);	
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

