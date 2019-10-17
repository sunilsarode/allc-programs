#include<stdio.h>
#include<math.h>
int factorial(int n);
int combination(int n,int i);
int main(){
double percent,n;
scanf("%lf %lf",&percent,&n);

double p=percent/100;
double q=1-p;
//printf("%lf",p);
//printf("%lf",q);
double sum=0;
double sum1=0;
for(int i=0;i<3;i++){
  sum+=(combination(10,i)*pow(p,i)*pow(q,(10-i)));
}
for(int i=0;i<2;i++){
  sum1+=(combination(10,i)*pow(p,i)*pow(q,(10-i)));
}
printf("%.3lf\n",sum);
printf("%.3lf\n",1-sum1);
return 0;
}
int combination(int n,int i){
  
   return factorial(n)/(factorial(n-i)*factorial(i));
}
int factorial(int n){
  if(n==0||n==1){
      return 1;
   }
  return n*factorial(n-1);
}
