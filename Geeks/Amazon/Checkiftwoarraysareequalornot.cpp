#include<bits/stdc++.h>
 
#define ll long long int
using namespace std;
int fun(ll arr[],ll arr1[],int n){
 map<int,int> m; 
 for(int i=0;i<n;i++){
   m[arr[i]]++;
 }
 
 for(int i=0;i<n;i++){
     
     if(m.find(arr1[i])==m.end()){
       return 0;
     }
     --m[arr1[i]];
     
  }
 
  for(int i=0;i<n;i++){
     if(m[arr[i]]!=0){
        return 0;
   }
 }
  return 1;
}
int main(){

int t;
cin>>t;

while(t--){
  
  int n;
  cin>>n;
 
  ll arr[n];
  ll arr1[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
    
  } 
  for(int i=0;i<n;i++){
      cin>>arr1[i];
  }
  cout<<fun(arr,arr1,n)<<endl;
  
}

return 0;
}


/**
25
915 988 857 744 492 228 366 860 937 433 552 438 229 276 408 475 122 859 396 30 238 236 794 819 429
433 238 937 860 236 915 429 857 276 552 228 229 744 396 794 408 366 988 475 30 438 492 859 122 819

*/
