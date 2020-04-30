#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  
 ll n;
 cin>>n;
 ll f=1;
 for(ll i=1;i<=n;i++){
    f=f*i;
 }
 cout<<f<<"\n";
}
