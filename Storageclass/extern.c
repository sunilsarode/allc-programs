#include<stdio.h>
#include "head.c"
int z=0;

void count(){
 int y;
 y++;
}
int main(){

extern int x;
//x=10;



printf("%d",x);
printf("%d",y);
count();
printf("%d",y);
return 0;
}


