#include<bits/stdc++.h>
using namespace std;

int knap(int n,int C,vector<int>& w,vector<int>& val,vector<vector<int>>& dp){

   if(n==0||C==0){
        return 0;    
   }

   if(dp[n][C]!=INT_MAX){
       return dp[n][C];
   }

   if(w[n-1]>C){
       dp[n][C]=knap(n-1,C,w,val,dp);
       return dp[n][C];
   }

   if(val[n-1]==-1){
     dp[n][C]=knap(n-1,C,w,val,dp);
     return dp[n][C];
   }
 
   dp[n][C]=min(val[n-1]+knap(n,C-w[n-1],w,val,dp),knap(n-1,C,w,val,dp));

   return dp[n][C];
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,C;
	    cin>>n;
	    cin>>C;
	    vector<int> val(n);
	    vector<int> weight(n);
	    
	    for(int i=0;i<n;i++){
	        cin>>val[i];
	    }
	    for(int i=0;i<n;i++){
	        weight[i]=i+1;
	    }
	    
	    vector<vector<int>> dp(n+1,vector<int>(C+1,INT_MAX));

	    knap(n,C,weight,val,dp);

            for(int i=0;i<n+1;i++){
               for(int j=0;j<C+1;j++){
                    cout<<dp[i][j]<<" ";
              }

              cout<<endl;
            }
	    cout<<dp[n][C]<<endl;
	}
	return 0;
}
