#include<stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int n=0;
        scanf("%d",&n);
        int array[n];
        int hash[100000]={0};
        for(int i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }

        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=array[i];
        }

        int arr[n+1][sum+1];
        for(int i=0; i<=n; i++)
        {
            arr[i][0]=1;
        }
        for(int i=1; i<=sum; i++)
        {
            arr[0][i]=0;
        }


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
                if(j>=array[i-1])
                {
                    arr[i][j]=arr[i-1][j-array[i-1]]||arr[i-1][j];
                }
                else
                {
                    arr[i][j]=arr[i-1][j];
                }
            }
        }
        printf("%d",arr[n][sum]);

        t--;
    }
    return 0;
}
