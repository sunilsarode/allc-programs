#include<stdio.h>
void main()
{
int n, count;
float sum = 0, x, avg;
printf("\nEnter How Many Numbers : ");
scanf("%d", &n);
for(count = 1; count <= n; count++)
{
printf("x = ");
scanf("%f", &x);
sum += x;
}
avg = sum / n;
printf("the Average of Numbers is : %0.2f", avg);
}
