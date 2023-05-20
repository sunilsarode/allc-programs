#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    
    ll n;
    cin>>n;
   
    ll i=5;
    ll ans=0;
    while(n/i!=0){
      ans=ans+n/i;
      i=i*5;
    }
    
    cout<<ans<<"\n";
   }
       
  return 0;
}

