#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int main(){
int t;
cin>>t;

while(t--){
  
  ll n;
  cin>>n;
  if(n%2==0){
     ll b=n/2;
     ll c=n-b;
     ll a=c+1;
     b=b-1;
     cout<<n-a<<"\n";
  }else{
     ll b=n/2;
     
     ll a=n-b;
     cout<<n-a<<"\n";
  }
}

}
