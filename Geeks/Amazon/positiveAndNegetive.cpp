#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
 int n;
 cin>>n;
 int arr[n];

 for(int i=0;i<n;i++){
   cin>>arr[i];
 }
  
 int k=-1,temp;

 for(int j=0;j<n;j++){
    if(arr[j]<0){
      k++;
      temp=arr[k];
      arr[k]=arr[j];
      arr[j]=temp;
 
   }
 }


 int p=k+1,ng=0;

 while(p<n && ng<p && arr[ng]<0){
    int temp=arr[ng];
    arr[ng]=arr[p];
    arr[p]=temp;
    p++;
    ng+=2;
 }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl; 
}

return 0;
}


