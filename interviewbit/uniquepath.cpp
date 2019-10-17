#include<bits/stdc++.h>

using namespace std;

int main(){
  int m,n;
  cin>>m>>n;
  vector<vector<int>> dp(n,vector<int>(m,1));
   
  cout<<dp.size()<<dp[0].size()<<endl;

  vector<vector<int>> dp1(m,vector<int>(n,1));
   
  cout<<dp1.size()<<dp1[0].size()<<endl;
  
  return 0; 
}
