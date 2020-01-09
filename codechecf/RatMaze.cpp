#include<bits/stdc++.h>
// 1231
using namespace std;

string getsol(int n){

    string s;
      for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){

            }
         }
  
}

void dfs(vector<vector<int>>& arr,vector<vector<int>>& vis,int i,int j,int n,int& ans){

  

   if(i==n-1&&j==n-1&&arr[i][j]==0){
         vis[i][j]=1;
         ans++;      
         return;
   }
 
   if(i<0||i>=n||j<0||j>=n||arr[i][j]==1||vis[i][j]==1){

         return;
   }
  
   vis[i][j]=1; 
  
      dfs(arr,vis,i+1,j,n,ans); 

      dfs(arr,vis,i-1,j,n,ans);

 
      dfs(arr,vis,i,j+1,n,ans);
 

      dfs(arr,vis,i,j-1,n,ans);
  
   vis[i][j]=0;
   
}

int main(){


  int n;
  cin>>n;
  vector<vector<int>> arr(n,vector<int>(n,0));
  vector<vector<int>> vis(n,vector<int>(n,0));  

  for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       cin>>arr[i][j];    
   }
  }
 
  int ans=0;
  dfs(arr,vis,0,0,n,ans);


  cout<<ans<<endl;


return 0;
}
