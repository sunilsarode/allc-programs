#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int n;
  cin>>n;
  
  vector<int> arr(n);
  for(int i=0;i<n;i++){
     cin>>arr[i];
  } 
  
  for(int i=n-1;i>=0;i--){
     cout<<arr[i]<<" ";
  }
  
  cout<<"\n";
   	
  return 0;
}
