#include<stdio.h>
#include <limits.h>
void merging(long  p[],int low,int mid,int high);
void mergesort(long p[],int low,int high);
int sum=0;
int main()
{
    int n=0;
    scanf("%d",&n);
    long arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%ld",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("%d",sum);
    for(int i=0; i<n; i++)
    {
        printf("%ld",arr[i]);
    }
    return 0;
}
void mergesort(long p[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(p,low,mid);
        mergesort(p,mid+1,high);
        merging(p,low,mid,high);
    }

}
void merging(long p[],int low,int mid,int high)
{
    // if array is of size 5
    //array one will have 2-0+1=3 as array size
    int n1=mid-low+1;
    //array two will have 4-2=2 as array size
    int n2=high-mid;
    int arr1[n1+1];
    int arr2[n2+1];
    for(int i=0; i<n1; i++)
    {
        arr1[i]=p[low+i];
    }
    for(int i=0; i<n2; i++)
    {

        arr2[i]=p[mid+1+i];
    }
    arr1[n1]=LONG_MAX;
    arr2[n2]=LONG_MAX;

    int i1=0;
    int j1=0;
    for(int k=low; k<=high; k++)
    {
        if(arr1[i1]<=arr2[j1])
        {
            p[k]=arr1[i1];
            i1++;
            sum+=arr1[i1];
        }
        else
        {
            p[k]=arr2[j1];
            j1++;
        }
    }
}
