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
  sort(arr.begin(),arr.end());

  
  
  ll sum=0;
  ll sum1=0;
  
  if(k>n/2){
  	int i=n-1;
  	while(k--){
  		sum1+=arr[i];
  		i--;
  	}
  	
  	while(i>=0){
  	       sum+=arr[i];
  	       i--;	
  	}
  	cout<<sum1-sum<<'\n'; 
  }else{
  	int i=0;
  	while(k--){
  		sum1+=arr[i];
  		i++;
  		//cout<<k<<"\n";
  	}
  	while(i<n){
  		sum+=arr[i];
  		i++;
  	}
  	cout<<sum-sum1<<'\n'; 
  }

  
  		
 }
 
 
 	

 return 0;
   
}
