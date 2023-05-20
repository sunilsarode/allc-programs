#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    
    vector<ll> arr(n+1,0);
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
    }
    
   // map<ll,ll> mp;
    ll c=0;
    for(int i=1;i<=n;i++){
    	if((arr[i]-i)==c){
    	  // mp[c]++;
    	   c=c+1;
    	}    		
    }
    
    cout<<c<<"\n";
    
  }
       
  return 0;
}

