#include<stdio.h>
#include<math.h>

int main(){

double lambda;
double lambda1;
scanf("%lf",&lambda);
scanf("%lf",&lambda1);

double dailyCostA = 160 + 40 * (lambda + (lambda * lambda));
double dailyCostB = 128 + 40 * (lambda1 + (lambda1* lambda1));
printf("%.3lf\n",dailyCostA);
printf("%.3lf\n",dailyCostB);
return 0;
}

