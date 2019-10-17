#include<stdio.h>
int main()
{

    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_ending_here = 0;
    int max_so_far = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_ending_here + arr[i] > 0)
        {
            max_ending_here = max_ending_here + arr[i];
        }
        else
        {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
    }
    printf("%d",max_so_far);
    return 0;
}
