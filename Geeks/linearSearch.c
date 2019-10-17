#include<stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int n=0;
        scanf("%d",&n);
        int copy=n;
        int sum=0;
        while(n)
        {
            int x=n%10;
            sum=sum*10+x;
            n=n/10;

        }
        if(sum==copy)
        {
            printf("Yes\n");

        }
        else
        {
            printf("No\n");
        }
        t--;
    }

    return 0;
}

