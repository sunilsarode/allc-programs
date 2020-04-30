#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main(){
ll n,W;
cin>>n>>W;
vector<ll> dp(W+1);//0..W

ll val=0;
ll weight=0;
for(int item=0;item<n;item++){
     
     cin>>weight>>val;
     

     for(int weight_already=W-weight;weight_already>=0;weight_already--){
         /* 
            dont consider the item and consider the item
            dp[i] - the maximum total value of items with total weight exactly i
         */
         dp[weight_already+weight]=max(dp[weight_already+weight],dp[weight_already]+val);
     }
     /*for(auto val:dp){
        cout<<val<<" ";
     }
     cout<<"\n";*/	
}
ll ans=0;
for(int i=0;i<W+1;i++){
   ans=max(ans,dp[i]);
}
cout<<ans<<"\n";
}
