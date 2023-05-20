#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
 int t;
 cin>>t;
 
 while(t--){
  int n,k;
  cin>>n>>k;
  vector<ll> arr(n);
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }				
  sort(arr.begin(),arr.end(),greater<int>());

  int elm= arr[k-1];
  
  int c=0;
  for(int i=0 ;i<k;i++){
  	c++;
  }
  for(int i=k;i<n;i++){
  	if(arr[i]>=elm){
  		c++;
  	}
  }
  cout<<c<<'\n'; 		
 }
 
 
 	

 return 0;
   
}
