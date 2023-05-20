#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

  int t;
  cin>>t;
  while(t--){
    ll k,d0,d1;
    cin>>k>>d0>>d1;
    //ll cd0=d0;
    //ll cd1=d1;
    ll rem=k-2;
    ll sum=d0+d1;
    while(rem--){
       ll nd= (d0+d1)%10;
       d0=d1;
       d1=nd;
       sum+=nd;
    }
    if(sum%3==0){
       cout<<"YES"<<"\n";
    }else{
       cout<<"NO"<<"\n";
    }
  }
       
  return 0;
}

