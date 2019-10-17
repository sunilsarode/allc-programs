#include<stdio.h>
#define max 1001
int main(){

int isPrime[max]={0};
isPrime[0]=1;
isPrime[1]=1;
for(int i=2;i*i<max;i++){
  if(isPrime[i]==0){
	for(int j=i*2;j<max;j+=i){
	   isPrime[j]=1;
	}
  }
}
int n=0;
scanf("%d",&n);
for(int i=2;i<n;i++){
  if(isPrime[i]==0){
   printf("%d ",i);
 }
}

return 0;
}

