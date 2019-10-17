//refer geeks for geeks
#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
cin>>t;
while(t-->0){
  int n,k;
  cin>>n>>k;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n-1&&k>0;i++){
    int p=i;

     for(int j=i+1;j<n;j++){
  
       if(j-i>k){
          break;
       }

       if(arr[j]<arr[p]){
           p=j;   
       }
    }
     int temp;
    for(int k=p;k>i;k--){
       temp=arr[k];
       arr[k]=arr[k-1];
       arr[k-1]=temp;
    }  
   
   k=k-(p-i);

  }
 
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
}
return 0;
}
