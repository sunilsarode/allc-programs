#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
 int n;
 cin>>n;
 int arr[n];
 int a[n];
 for(int i=0;i<n;i++){
   cin>>arr[i];
   a[i]=0;
 }
  
 int k=0,temp;

 for(int j=0;j<n;j++){
    if(arr[j]>0){
         
       if(2*k<n){
          a[2*k]=arr[j];
       }
       k++;
    }
 }
 k=0;
 for(int j=0;j<n;j++){
  if(arr[j]<0){
      
       if((2*k)+1<n){
          a[(2*k)+1]=arr[j];
       }
      k++;
   }
 }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
 cout<<endl; 
}

return 0;
}


