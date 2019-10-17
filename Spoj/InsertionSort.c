#include<stdio.h>
int main()
{

    int t=0;


    scanf("%d",&t);

    while(t>0)
    {
        int n=0;
        scanf("%d",&n);
        int arr[n];
        int key=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int count=0;
        int j=0;
        for(int i=1; i<n; i++)
        {
            key=arr[i];
            j=i-1;

            while(j>=0&&arr[j]>key)
            {
                arr[j+1]=arr[j];
                count++;
                j=j-1;
            }
            arr[j+1]=key;

        }
        printf("%d",count);

        t--;
    }
    return 0;
}
