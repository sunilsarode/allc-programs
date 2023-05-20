#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  ll n;
  cin>>n;
  vector<ll> arr(n);
  
  for(ll i=0;i<n;i++){
     cin>>arr[i];
  }
  
  sort(arr.begin(),arr.end());
  
  ll m=0;
  for(ll i=0;i<n;i++){
     ll sum=0;
     ll p=n-i;
     sum=p*arr[i];
     
     m=max(sum,m);
  }

   cout<<m<<"\n";	
     
  return 0;
}

