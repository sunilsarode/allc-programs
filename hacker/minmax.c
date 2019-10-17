#include<stdio.h>
int main()
{
    int n,i,j,temp ;
    scanf("%d",&n);
    int num[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            if (num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }

        }



    int min=num[0];
    int k=1;

    for(i=0; i<n; i++)
    {
        if (min==num[i])
        {
            min++;
        }
        else
        {
            k=0;
            break;


        }
    }
    if (k==1)
    {
        printf("YES");

    }
    else
    {
        printf("NO");

    }

    return 0;

}
R
