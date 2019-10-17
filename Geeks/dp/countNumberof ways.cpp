#include <bits/stdc++.h>

#define mod 1000000007
using namespace std;

typedef long long int ll;

ll fun(ll dp[],int n,int k){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }else{
        ll sum=0;
        for(int i=1;i<=k;i++){
            sum=(sum+fun(dp,n-i,k))%mod;
        }
        dp[n]=sum;
        return dp[n];
    }
    
}
int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,k;
	    cin>>x>>k;
	    ll dp[x+1]={0};
	    
	    cout<<fun(dp,x,k)<<endl;
	}
	return 0;
}
