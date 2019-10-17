#include<stdio.h>
int main()
{
    int timeUnit=0;
    int n=0;
    scanf("%d",&n);
    int arr[n];
    int idealArr[n];
    int i=0;
    for(; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(; j<n; j++)
    {
        scanf("%d",&idealArr[j]);
    }
    int k=0,c=0,c1=0;
    for(; k<n; k++)
    {
        if(arr[k]==idealArr[k])
        {
            c1=k;
            for(;c1<n){

            }
            timeUnit++;
        }
        else
        {
            int c=k;
            int temp=arr[c];
            for(; c<n-1; c++)
            {
                arr[c]=arr[c+1];

            }
            arr[c]=temp;
            timeUnit++;
        }
    }

    printf("%d",timeUnit);
    return 0;
}
