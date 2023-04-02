#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int n;
cin>>n;

//vector<ll> arr(n);
ll x=0;
ll sum=0;
for(int i=0;i<n;i++){
  cin>>x;
  sum+=x;
}

cout<<sum<<"\n";
return 0;
}
