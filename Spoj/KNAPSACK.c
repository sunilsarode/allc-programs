#include<stdio.h>
int main()
{
    int n=0, s=0;
    scanf("%d%d",&s,&n);
    int w[n];
    int p[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&w[i],&p[i]);
    }
    int arr[n+1][s+1];
    for(int i=0; i<=s; i++)
    {
        arr[0][i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        arr[i][0]=0;
        for(int j=1; j<=s; j++)
        {
            if(w[i-1]<=j&&(p[i-1]+arr[i-1][j-w[i-1]])>arr[i-1][j])
            {
                arr[i][j]=p[i-1]+arr[i-1][j-w[i-1]];
            }
            else
            {
                arr[i][j]=arr[i-1][j];
            }
        }
    }

      for(int i=0;i<n+1;i++){
               for(int j=0;j<s+1;j++){
                    printf("%d ",arr[i][j]);
              }
             printf("\n");
     
          }
    printf("%d",arr[n][s]);

    return 0;
}
