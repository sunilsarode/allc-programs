#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    int j=0;
    while(arr[j]!='\0')
    {
        j++;
    }
    int oneCount=0;
    int zeroCount=0;
    int l=0;
    for(int i=0; i<j; i++)
    {
        if(arr[i]=='0')
        {
            oneCount=0;
            zeroCount++;
            if(zeroCount==6)
            {
                l=1;
                break;
            }
        }
        else
        {
            zeroCount=0;
            oneCount++;
            if(oneCount==6)
            {
                l=1;
                break;
            }
        }
    }
    if(l)
    {
        printf("Sorry, sorry!");
    }
    else
    {
        printf("Good luck!");
    }
    return 0;
}
