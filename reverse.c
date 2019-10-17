#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=n-1;
    for(; j>=0; j--)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}
