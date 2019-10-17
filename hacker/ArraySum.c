#include<stdio.h>
typedef long long ll;
int main(){
int n=0;
scanf("%d",&n);
ll arr[n];
ll sum=0;
for(int i=0;i<n;i++){
scanf("%lld",&arr[i]);
sum=sum+arr[i];
}
printf("%lld",sum);
return 0;
}
