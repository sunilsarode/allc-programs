#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){

unordered_map<ll,ll> mp;

int t;
cin>>t;
while(t-->0){
   ll n;
   cin>>n;
   ll prefixsum=0;
   ll val;
   ll res=0;
   for(int i=0;i<n;i++){
     cin>>val; 
     prefixsum+=val;

     if(prefixsum==0){
        res++;
     }

     if(mp.find(prefixsum)!=mp.end()){
         res=res+mp[prefixsum];
     }

     mp[prefixsum]++;
   }

  cout<<res<<endl;
}
return 0;
}
