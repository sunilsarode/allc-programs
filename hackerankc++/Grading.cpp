#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
   cin>>arr[i];
}
for(int i=0;i<n;i++){
  int val=arr[i];
 if(val>=38){
    while(arr[i]%5!=0){
       ++arr[i];
   }
   // cout<<arr[i]<<endl;
 
    if(!((arr[i]-val)<3)){
      arr[i]=val;      
    }
  }
}

for(int i=0;i<n;i++){
  cout<<arr[i]<<endl;
}
return 0;
}
