#include<stdio.h>
int findTrailingZero(int n, int divider,int sum)
int main()
{
    int arr[100000]= {0};
    for(int i=1; i<=100000; i++)
    {
        arr[i]=findTrailingZero(i,5,0);
    }
    int t=0;
    scanf("%d",&t);
    wjile(t>0)
    {
        int m=0;
        scanf("%d",&m);
        int count=0;
        int outputArr[100000]= {0};
        for(int i=0; i<100000; i++)
        {
            if(arr[i]==m)
            {
                count++;
                outputArr[]
            }
        }
        printf("%d\n",count);
        printf("%d\n",)
        t--;
    }

    return;
}

int findTrailingZero(int n, int divider,int sum)
{

    int val = n / divider;
    divider = divider * 5;
    if (val <= 0)
    {
        return sum;
    }
    else
    {
        sum = sum +  val;
        findTrailingZero(n, divider,sum);
    }
    return sum;

}
