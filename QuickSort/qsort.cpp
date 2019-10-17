#include<bits/stdc++.h>
using namespace std;

int Partition(int A[],int start,int end)
{   int temp=0;
    int x=A[end];
    int i=start-1;
    //cout<<start<<" "<<endl;
    for (int j=start;j<end;j++)
    {
        if (A[j]<=x)
        {
            i=i+1;
            swap(A[i],A[j]);

        }
    }
    //A[i+1]=A[end];
    swap(A[i+1],A[end]); 
    return i+1;


}
void quick_sort(int arr[],int l,int r)
{
    if (l<r)
    {
        int q=Partition(arr,l,r);
       // cout<<q<<endl;
        quick_sort(arr,l,q-1);
        quick_sort(arr,q+1,r);

    }

}
void printArray(int A[],int n)
{
   for (int l=0;l<n;l++)
    {
        cout<< A[l]<<" ";

    }

}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for( int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    printArray(arr,n);

    return 0;


}
