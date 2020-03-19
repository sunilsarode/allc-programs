#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
while(t--){

  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  int m=INT_MAX;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    
  }
  
  int c=0;
  for(int i=0;i<n;i++){
     if((arr[i]+k)%7==0){
         c++;
     }
  }


  cout<<c<<"\n";
}
return 0;
}
