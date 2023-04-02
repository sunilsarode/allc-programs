#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
 int t;
 cin>>t;
 
 while(t--){
  int n;
  cin>>n;
  vector<ll> arr(n);
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }				
  sort(arr.begin(),arr.end());
  cout<<arr[0]+arr[1]<<'\n'; 		
 }
 
 
 	

 return 0;
   
}
