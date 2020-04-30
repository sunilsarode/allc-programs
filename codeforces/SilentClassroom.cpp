#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
int n;
cin>>n;
//vector<string> arr(n);
string s;
unordered_map<char,ll> mp;
for(int i=0;i<n;i++){
  cin>>s;
  mp[s[0]]++;
}
ll ans=0;
for(auto v:mp){
  ll c=v.second;
  if(c>1){
      ll a=c/2;
      ll b=c-a;
      ll x=(a*(a-1))/2;
      ll y=(b*(b-1))/2;
      ans+=(x+y);
  }
 
}
cout<<ans<<"\n";
}
