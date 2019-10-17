#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n=0;
	scanf("%d",&n);
	long long arr[n];
	
	
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	printf("work");
	
	
	for(int i=0;i<n;i++){
		printf("%lld ",arr[i]);
	}
	return 0;
}
