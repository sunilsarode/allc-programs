#include<stdio.h>

int main(){

int n=0;
scanf("%d",&n);
int sum=0;
int vertex=0;
for(int i=0;i<n;i++){
  scanf("%d",&vertex);
  sum+=vertex;
}
if(sum==(2*(n-1))){
  printf("Yes");
}else{
  printf("No");
}
return 0;
}
