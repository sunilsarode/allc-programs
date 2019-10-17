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

  int l=0,r=n-1,mid;

  while(l<r){
     mid=(l+r)/2;
  
     if(arr[mid]>arr[mid+1]){
         r=mid;
     }else {
         l=mid+1;
     }
  }
  cout<<arr[l]<<endl;
}
return 0;
}
