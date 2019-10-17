#include<stdio.h>
int count(int i,int arr[],long memo[]);
int main()
{

    int t=0;
    scanf("%d",&t);
    while(t>0)
    {
        int n=0;
        scanf("%d",&n);
        int arr[n];
        long memo[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            memo[i]=0;
        }
        long sum=0;
        long bump=0;
        for(int i=0; i<n; i++)
        {
            int copy=0;
            copy+=count(i,arr,memo);
            bump=bump+((i+1)-(1+copy));
            sum+=copy;
        }

        printf("%ld %ld\n",sum,bump);

        t--;
    }
    return 0;
}
int count(int i,int arr[],long memo[])
{
    if(arr[i]==0)
    {
        return 0;
    }
    if(memo[i]==0)
    {
        memo[i]=1+count(arr[i]-1,arr,memo);
        return memo[i];
    }
    else
    {
        return memo[i];
    }

}
