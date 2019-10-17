#include<stdio.h>
#include<math.h>
int factorial(int n);
int combination(int n,int i);
int main(){
double b,g;
scanf("%lf %lf",&b,&g);

double p=b/(g+b);
double q=1-p;
printf("%lf",p);
printf("%lf",q);
double sum=0;
for(int i=3;i<=6;i++){
  sum+=(combination(6,i)*pow(p,i)*pow(q,(6-i)));
}
printf("%.3lf",sum);
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
