#include<bits/stdc++.h>

using namespace std;

string getsol(int n){

    string s;
      for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){

            }
         }
  
}

void dfs(vector<vector<int>>& arr,vector<vector<int>>& vis,int i,int j,int n,string& s,vector<string>& ans){

  

   if(i==n-1&&j==n-1){
        
         ans.push_back(s);      
         return;
   }
   vis[i][j]=1; 

   if(i+1<n&&vis[i+1][j]==0&&arr[i+1][j]!=0){
      s+="D";
      dfs(arr,vis,i+1,j,n,s,ans); 
      s.pop_back();
   }
   if(i-1>=0&&vis[i-1][j]==0&&arr[i-1][j]!=0){
      s+="U";
      dfs(arr,vis,i-1,j,n,s,ans);
      s.pop_back();   
   }
   if(j+1<n&&vis[i][j+1]==0&&arr[i][j+1]!=0){
      s+="R";
      dfs(arr,vis,i,j+1,n,s,ans);
      s.pop_back();   
   }
   if(j-1>=0&&vis[i][j-1]==0&&arr[i][j-1]!=0){
      s+="L";
      dfs(arr,vis,i,j-1,n,s,ans);
      s.pop_back();   
   }
   vis[i][j]=0;
   
}

int main(){

int t;
cin>>t;

while(t--){

  int n;
  cin>>n;
  vector<vector<int>> arr(n,vector<int>(n,0));
  vector<vector<int>> vis(n,vector<int>(n,0));  

  for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       cin>>arr[i][j];    
   }
  }
  vector<string> ans;
  string s;
  dfs(arr,vis,0,0,n,s,ans);

  sort(ans.begin(),ans.end());

  for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
  }
  cout<<endl;
}

return 0;
}
