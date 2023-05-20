#include<stdio.h>
#include<stdlib.h>

int main(){

int *p,*q,*b,a=10;
p=&a;
b=q;
q=p;
printf("%d\n",*q);
printf("%d\n",*b);
return 0;
}
