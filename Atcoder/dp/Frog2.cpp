#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

int n,k;
cin>>n>>k;
vector<int> arr(n);
for(int i=0;i<n;i++){
   cin>>arr[i];
}
vector<int> dp(n,INT_MAX);

dp[0]=0;

for(int pos=0;pos<n;pos++){
    for(int jump=pos+1;jump<=(pos+k);jump++){
       if(jump<n){
          dp[jump]=min(dp[jump],dp[pos]+abs(arr[pos]-arr[jump]));
       }
       
   }
}
cout<<dp[n-1]<<"\n";
 return 0;
}
