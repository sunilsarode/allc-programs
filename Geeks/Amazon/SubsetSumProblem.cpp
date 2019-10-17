#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>& v,int n,int sum,vector<vector<int>>& dp){
    
    if(sum==0){//sum itself is zero
        return true;
    }
    if(sum!=0&&n==0){//no element
        return false;
    }

    if(dp[n][sum]!=-1){
         return dp[n][sum];
    }
    if(sum<v[n-1]){//elelment is greater than the sum ,exclude it
        
        dp[n][sum]=isSubset(v,n-1,sum,dp);
        return dp[n][sum];
    }

       
    //consider once and not considering once
    
        dp[n][sum]=isSubset(v,n-1,sum,dp)||isSubset(v,n-1,sum-v[n-1],dp);
    return dp[n][sum];
        
    
}

int main() {
	
	int t;
	cin>>t;
	
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    
	    for(int i=0;i<n;i++){
	         cin>>v[i];
	    }
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=v[i];
	    }
	    
	    if(sum%2!=0){
	        cout<<"NO"<<endl;
	    }else{
	        
	        sum=sum/2;
	        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
	        

	        if(isSubset(v,n,sum,dp)){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	        
	    }
	     
	}
	
	return 0;
}
