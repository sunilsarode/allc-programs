#include<stdio.h>
int main()
{
    int *j,*i;
    int arr[7]= {10,20,30,45,67,56,74};

    i=&arr[1];
    j=&arr[5];

    printf("%d\n",(sizeof(j)));
    printf("%d %d\n",&arr[5]-&arr[1],*j-*i);
    return 0;
}
