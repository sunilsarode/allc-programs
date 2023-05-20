#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  ll n;
  cin>>n;
  ll sum=0;
  /*for(int i=1;i<=n;i++){
    sum+=i;
  }*/
  sum= n*(n+1)/2;
  cout<<sum<<"\n";
   	
  return 0;
}
