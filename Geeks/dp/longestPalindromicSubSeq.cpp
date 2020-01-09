#include<bits/stdc++.h>

using namespace std;
int getAns(vector<vector<int>>& dp,int i,int j,string s){
 //i crosses j
   if(i>j){
        return 0;
   }

   if(i==j){//single char is palindrom
       return 1;
   }
   if(dp[i][j]!=0){
        return dp[i][j];
   }

   if(s[i]==s[j]){//first and last char match
      dp[i][j]=2+getAns(dp,i+1,j-1,s);
       return dp[i][j];
   }
   //last two char does not match,then for this example "caad" then consider caa or aad 
   dp[i][j]=max(getAns(dp,i+1,j,s),getAns(dp,i,j-1,s));
 
   return dp[i][j];
}
int main(){

string s;
cin>>s;

vector<vector<int>> dp(s.size(),vector<int>(s.size(),0));

cout<<getAns(dp,0,s.size()-1,s)<<endl;

return 0;
}
