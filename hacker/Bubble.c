#include<stdio.h>
#include <limits.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    long arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%ld",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {

            if(arr[j]>arr[j+1])
            {
                long temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }

    }

    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%ld ",arr[i]);
    }
    return 0;
}
