#include<stdio.h>
int main()
{
    int n=0;

    while(1)
    {
        scanf("%d",&n);
        if(n==42)
        {
            break;
        }
        else
        {
            printf("%d",n);
            printf("\n");
        }

    }
    return 0;
}
