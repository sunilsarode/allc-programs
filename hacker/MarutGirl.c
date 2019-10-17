#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m=0;
    int hashtable[10000+1]= {0};
    scanf("%d",&m);

    int arr[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
        hashtable[arr[i]]=1;
    }

    int girls=0;
    scanf("%d",&girls);

    int **array;
    array = malloc(girls * sizeof(int *));

// Here we make each row of it's own, individual length.
    for(int i = 0; i < girls; i++)
    {
        array[i] = malloc(1000* sizeof(int));

    }
    for(int i=0; i<girls; i++)
    {
        for(int j=0; j<1000; j++)
        {
            array[i][j]=0;

        }
    }

    char c;
    for(int i=0; i<girls; i++)
    {
        int k=0;
        while(scanf("%d%c",&array[i][k],&c)>0)
        {
            k++;
            if(c=='\n')
                break;
        }
    }
    int count=0;
    int ans=0;
    for(int i=0; i<girls; i++)
    {
        for(int j=0; j<1000; j++)
        {
            if(array[i][j]<=10000)
            {
                if (hashtable[array[i][j]])
                {
                    count++;
                }
            }
        }
        if(count==m)
        {
            ans++;
        }
        count=0;
    }
    printf("%d",ans);
    return 0;


}
