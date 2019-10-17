#include<bits/stdc++.h>
using namespace std;
#define max 1000000001 
typedef long long ll; 
int main(){
int t;
cin>>t;
while(t-->0){
int n,q;
ll val;
map<ll,int> mp;
cin>>n>>q;
for(int i=0;i<n;i++){
  cin>>val;
  mp[val]++;
}
ll x;
for(int i=0;i<q;i++){
  cin>>x;
  map<ll,int>::iterator it;
  it=mp.find(x);
  if(it!=mp.end())
    cout<<it->second<<endl;
  else
    cout<<0<<endl;
}
}


return 0;
}
