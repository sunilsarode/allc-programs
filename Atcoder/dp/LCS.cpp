#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int fun(string &s1,string &s2,int i,int j,vector<vector<int>>& dp){
   if(i<=0||j<=0){
        return 0;
   }
   if(dp[i][j]!=-1){
       return dp[i][j];
   }
   if(s1[i-1]==s2[j-1]){
       dp[i][j]=1+fun(s1,s2,i-1,j-1,dp);
       return dp[i][j];
   }
   dp[i][j]=max(fun(s1,s2,i-1,j,dp),fun(s1,s2,i,j-1,dp));
   return dp[i][j];
}

int main(){

  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size();
  int m=s2.size();
  vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
  fun(s1,s2,n,m,dp);
  /*for(int i=0;i<=n;i++){
     for(int j=0;j<=m;j++){
       cout<<dp[i][j]<<" ";
    }
    cout<<"\n";
  } */
  int len=dp[n-1][m-1];  
  int i=n;
  int j=m;
  string res;
  while(i>0&&j>0){
     if(s1[i-1]==s2[j-1]){
        res.push_back(s1[i-1]); 
        i--;
        j--;
     }else if(dp[i-1][j]>dp[i][j-1]){
        i--;
     }else{
        j--;
     }
  }
  reverse(res.begin(),res.end());
  cout<<res<<"\n";
  
}
