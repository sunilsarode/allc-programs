#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {

        int  n,m;
        int k=1;
        int l=1;
        scanf("%d",&n);
        scanf("%d",&m);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int copy[n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {

                if(j==0)
                {
                    if(arr[j+1]==1)
                    {
                        copy[j]=1;
                    }
                    else
                    {
                        copy[j]=0;
                    }
                }
                else if(j==n-1)
                {
                    if(arr[j-1]==1)
                    {
                        copy[j]=1;
                    }
                    else
                    {
                        copy[j]=0;
                    }

                }
                else
                {
                    if(arr[j-1]==1&&arr[j+1]==1)
                    {
                        copy[j]=1;
                    }
                    else
                    {
                        copy[j]=0;
                    }

                }
                if(!(arr[j]==copy[j]))
                {
                    k=0;
                }
            }

            if(k==1)
            {
                break;
            }
            for(int i=0; i<n; i++)
            {
                arr[i]=copy[i];

            }

        }
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        t--;
    }
    return 0;
}
