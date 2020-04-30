#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll INF=1e4L+5;//change it for submission to 1e18
int main(){
ll n,W;
cin>>n>>W;

vector<ll> weight(n),val(n);
for(int i=0;i<n;i++){
    cin>>weight[i]>>val[i];
}
int sum_val=0;
for(auto v:val){
   sum_val+=v;
}
 // dp[i] - the minimum total weight of items with total value exactly i
vector<ll> dp(sum_val+1,INF);//0..W

dp[0]=0;
for(int item=0;item<n;item++){
     
     for(int value_already=sum_val-val[item];value_already>=0;value_already--){

         dp[value_already+val[item]]=min(dp[value_already+val[item]],dp[value_already]+weight[item]);
     }
     cout<<"\n";

     for(auto val:dp){
        cout<<val<<" ";
     }
     cout<<"\n";	
}
ll ans=0;
 // dp[i] - the minimum total weight of items with total value exactly i
for(int i=0;i<=sum_val;i++){
   if(dp[i]<=W){
      ans=max(ans,(ll)i);  
   }
   
}
cout<<ans<<"\n";
}
