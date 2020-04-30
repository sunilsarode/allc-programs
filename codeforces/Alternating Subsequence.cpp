#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){

int n;
cin>>n;
vector<int> arr(n);
vector<int> dp(n,1);
vector<int> sum(n,INT_MIN);
for(int i=0;i<n;i++){
   cin>>arr[i];
}
//5
//1 2 3 -1 -2

for(int i=0;i<n;i++){
   for(int j=0;j<i;j++){
      if(arr[j]>0&&arr[i]<0){
          dp[i]=max(dp[i],1+dp[j]);
	  sum[i]=max(sum[i],arr[i]+arr[j]);
      }else if(arr[j]<0&&arr[i]>0){
          dp[i]=max(dp[i],1+dp[j]);
	  sum[i]=max(sum[i],arr[i]+arr[j]);
      }
 }
}
for(auto i:dp){
   cout<<i<<" ";
}
cout<<"\n";
for(auto i:sum){
   cout<<i<<" ";
}
cout<<"\n";
int ans=0;
for(int i=0;i<n;i++){
   ans=max(sum[i],ans);
}
cout<<ans<<"\n";

}



}


