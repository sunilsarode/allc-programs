#include<bits/stdc++.h>
using namespace std;
void swap(int j,int k,int arr[]){
    int temp=arr[j];
    arr[j]=arr[k];
    arr[k]=temp;
}

int main(){

 int n=0;
 cin>>n;
 int arr[1000]={0};

 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 int totalswap=0;
   for(int i=0;i<n;i++){
       int numSwap=0;
       for(int j=0;j<n-1;j++){
          if(arr[j]>arr[j+1]){
              swap(j,j+1,arr);
              numSwap++;
          }
        }
       totalswap=totalswap+numSwap;
       if(numSwap==0){
            break;
       }

   }

   cout<<"Array is sorted in "<<totalswap<<"swaps."<<endl;
   cout<<"First Element: "<<arr[0]<<endl;
   cout<<"Last Element: "<<arr[n-1]<<endl;
   /*for(int i=0;i<n;i++){
       cout<<arr[i]<<endl;
   }*/

return 0;
}
