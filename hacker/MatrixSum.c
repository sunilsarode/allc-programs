#include<stdio.h>
int main()
{
    int m=0;
    int n=0;
    scanf("%d%d",&n,&m);
    int q=0;
    int arr[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    scanf("%d",&q);
    int dp[n][m];
    dp[0][0]=arr[0][0];
    for(int i=1; i<m; i++)
    {
        dp[0][i]=dp[0][i-1]+arr[0][i];
    }


    for(int i=1; i<n; i++)
    {
        dp[i][0]=dp[i-1][0]+arr[i][0];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            dp[i][j]=arr[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }
    int x=0;
    int y=0;
    for(int i=0; i<q; i++)
    {

        scanf("%d%d",&x,&y);
        printf("%d\n",dp[x-1][y-1]);
    }


    return  0;
}
