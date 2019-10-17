#include<stdio.h>
int main(){
    int data=0;

    scanf("%d",&data);
    unsigned long f=1;
    int i=1;
    for(;i<=data;i++){
        f=f*i;
    }
    printf("%lu",f);

    return 0;
}
