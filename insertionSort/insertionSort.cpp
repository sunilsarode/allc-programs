#include<bits/stdc++.h>

using namespace std;

void printArr(int arr[],int n){
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){

int n;
cin>>n;
int arr[n]={0};

for(int i=0;i<n;i++){
   cin>>arr[i];
}
printArr(arr,n); 

for(int i=1;i<n;i++){
  
  int key=arr[i];
  int j=i-1;
  while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      --j;
      printArr(arr,n);     
  }
  arr[j+1]=key;

}

printArr(arr,n);

return 0;
}
