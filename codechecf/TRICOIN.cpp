#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;


while(t--){
 
  int x;
  cin>>x;
  ll l=0;
  ll h=10e5;
  
  ll ans=0;
 
  while(l<=h){
  
    ll m = l+(h-l)/2;
    
    if(((m*(m+1))/2)<=x){
       ans =m;
       l= m+1;
    }else{
      h=m-1;
    }
  
  }
  
  cout<<ans<<"\n";
 

}

return 0;
}
