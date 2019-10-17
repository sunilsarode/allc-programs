#include <stdio.h>
int main()
{
    int arr[10000][10000];
    char a[15]; //assuming that string size will not exceed 100
    int variable=0;
    scanf("%d",&variable);
    scanf("%s",a); //read a string in array a
    printf("%d",variable*2);
    printf("\n");
    printf("%s",a); //print out array a
    return 0;
}
