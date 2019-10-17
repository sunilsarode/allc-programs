#include<stdio.h>
#include<math.h>
int factorial(int n);
int main(){

double lambda;
int x;
scanf("%lf",&lambda);
scanf("%d",&x);
double e=2.71828;
double ans=(pow(lambda,x)*pow(e,-lambda))/factorial(x);
printf("%.3lf",ans);
return 0;
}
int factorial(int n){
  if(n==0||n==1){
      return 1;
   }
  return n*factorial(n-1);
}
