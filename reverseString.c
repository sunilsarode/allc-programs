#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp;
    char str1[100];
    int i, j = 0;

    printf("\nEnter the string :");
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        str1[i]=str[i];
    }
    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("\nOriginal string is :%s", str1);
    printf("\nReverse string is :%s", str);
    return (0);
}
