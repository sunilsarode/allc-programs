#include <stdio.h>

int main()
{
    char arr[1000];
    int array[26]={0};
    scanf("%s",arr);
    char *ptr;
    ptr=arr;

    while(*ptr!='\0')
    {
        array[(*ptr-'a')]++;
        ptr++;

    }
    int sum=0;
    for(int i=0;i<26;i++){
        sum=sum+array[i]*(i+1);
    }
    printf("%d",sum);
    return 0;
}

