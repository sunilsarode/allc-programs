#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
cout << fixed << setprecision(8);
int t;
cin>>t;

while(t--){
 
  int n;
  cin>>n;
  
  ll x=0;
  ll m=0;
  ll sum=0;
  for(int j=0;j<n;j++){
     cin>>x;
     sum+=x;
     m= max(x,m);
     
  }
  
  cout<<1.0*(sum-m)/(n-1)+ m*1.0<<"\n";
    
}

return 0;
}
