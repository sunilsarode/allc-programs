#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <limits>
const int infinity = std::numeric_limits<int>::max();


void merge(int A[],int start, int mid, int end)
{   int n1,n2;
    n1=mid-start+1;
    n2=end-mid;
    int L1[n1+1];
    int L2[n2+1];
    L1[n1]=INT_MAX;
    L2[n2]=INT_MAX;
    for (int i=0; i<n1; i++)
    {
        L1[i]=A[start+i];
    }
    for (int j=0; j<n2; j++)
    {
        L2[j]=A[mid+j+1];
    }
    int i,j;
    i=0;
    j=0;
    int k=0;
    for (k=start; k<end; k++)
   {

     if (L1[i]<=L2[j])
     {
         A[k]=L1[i];
         i=i+1;

     }
     else
     {
        A[k]=L2[j];
        j=j+1;

     }

  }

  while(i<n1){
     A[k]=L1[i];
     i++;
     k++;
  }

  while(j<n2){
     A[k]=L2[j];
     j++;
     k++;
  }


}


void merge_sort (int A[], int start, int end )
{
   // cout<<start<<endl;
   // cout<<end<<endl;
    if( start < end )
    {
        int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
        merge_sort (A, start, mid ) ;                  // sort the 1st part of array .
        merge_sort (A,mid+1, end ) ;               // sort the 2nd part of array.

        // merge the both parts by comparing elements of both the parts.
        merge(A,start, mid, end );
    }

}

void printArray(int A[],int n)
{
   for (int l=0;l<n;l++)
    {
        cout<<A[l]<<endl;

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
    merge_sort(arr,0,n-1);
    printArray(arr,n);

    return 0;


}

