#include<stdio.h>
#include<limits.h>
void getSum(long arr[],int n);
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t>0)
    {

        int n=0;
        scanf("%d",&n);
        long arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%ld",&arr[i]);
        }

        getSum(arr,n);
        t--;
    }


}
void getSum(long array[],int n)
{
    long currenrSum = array[0];
    long start =0;
    int min = INT_MAX;
    int a = 0;
    int b = 0;
    for (int i = 1; i <= n; i++)
    {

        while (currenrSum % n != 0 && start < i - 1 && currenrSum >= n)
        {
            currenrSum = currenrSum - array[start];
            start++;
        }
        if (currenrSum % n == 0)
        {

            if ((i - 1 - start) < min)
            {
                min = (i - 1 - start);
                a = start + 1;
                b = i - 1 + 1;
            }
        }
        if (i < n)
            currenrSum += array[i];
    }
    printf("%d %d\n",a,b);

}
