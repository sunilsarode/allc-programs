#include<stdio.h>
#include<math.h>

int main(){
double num,denom;
int n;
scanf("%lf %lf",&num,&denom);
scanf("%d",&n);
double p=num/denom;
double q=1-p;
double ans=1;
ans =ans*(pow(q,(n-1))*p);
printf("%.3lf\n",ans);
return 0;
}

