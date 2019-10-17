#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){

map <pair<ll,ll>,int> mp;

int n,x,y;
cin>>n;
for(int i=0;i<n;i++){
   cin>>x>>y;
  pair<ll,ll> p=make_pair(x,y);
  mp[p]++;
}
map<pair<ll,ll>,int> ::iterator it;
for(it=mp.begin();it!=mp.end();++it){
   cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
}
return 0;
}
