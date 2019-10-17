#include<stdio.h>
#include<stdlib.h>
long long count(int a[],long long m, int n);
int main(){
	
	int t=0;
	scanf("%d",&t);
	while(t-->0){
		
		long long n=0;
		int p=0;
		
		scanf("%lld",&n);
		scanf("%d",&p);
		int arr[p];
		for(int i=0;i<p;i++){
			scanf("%d",&arr[i]);			
		}
		for(int i=0;i<p-1;i++){
			for(int j=i+1;j<p;j++){
				
				if(arr[i]==arr[j]){
					arr[j]=-1;
				}
			}
		}
		int k=0;
		int j=0;
		while(k<p){
			
			if(arr[k]!=-1)
            {
                arr[j]=arr[k];
                j++;
                k++;
            }
            else
            k++;
		}
		
		int size=j;
			
		printf("%d",j);
		
		
		long long ans=count(arr,n,size);
		
		printf("%lld",ans);
		printf("\n");
		
	}
	
	return 0;
}
long long count(int a[],long long m, int n)
{
    long long odd = 0, even = 0;
    int counter, j;
    long long p = 1;
    int pow_set_size = (1 << n);
 
    /* Run from counter 000..0 to 111..1 */
    for (counter = 1; counter < pow_set_size; counter++) {
        p = 1;
        for (j = 0; j < n; j++) {
 
            /* Check if jth bit in the counter is set
             If set then pront jth element from set */
            if (counter & (1 << j)) {
                p *= a[j];
            }
        }
 
        // if set bits is odd, then add to
        // the number of multiples
        if (__builtin_popcount(counter) & 1)
            odd += (m / p);
        else
            even += m / p;
    }
 
    return odd - even;
}
