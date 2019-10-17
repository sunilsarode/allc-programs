#include<stdio.h>

int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int n=0;
        long k=0;
        scanf("%d",&n);
        scanf("%ld",&k);
        long unsigned arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lu",&arr[i]);
        }
        long unsigned max=0;
        long unsigned count=0;
        for(int i=0; i<n; i++)
        {

            if(arr[i]<=k)
            {
                count+=arr[i];
            }
            else
            {

                count=0;
            }
            if(count>max)
            {
                max=count;

            }
        }


        printf("%lu\n",max);
        t--;
    }
    return 0;
}
