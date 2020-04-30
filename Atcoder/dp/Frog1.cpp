#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

int n;
cin>>n;
vector<int> arr(n);
vector<int> dp(n,INT_MAX);
for(int i=0;i<n;i++){
  cin>>arr[i];
}	
dp[0]=0;
for(int i=0;i<n;i++){
   for(int j=i+1;j<=i+2;j++){
       if(j<n){
	 dp[j]=min(dp[j],dp[i]+abs(arr[i]-arr[j]));	
       }
       
  }
}
cout<<dp[n-1]<<"\n";
 return 0;
}
