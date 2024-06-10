#include<bits/stdc++.h>

using namespace std;

bool dfs(unordered_map<int,vector<int>>& mp,int v,int p,vector<int>& vis){
    vis[v]=1;
    
    for(int i=0;i<mp[v].size();i++){
         int x=mp[v][i];
         if(x ==p){
             continue;
         }
         if(vis[x]==1){
             return true;
         }
         if(dfs(mp,x,v,vis)){
             return true;
         }
         
    }
     
   return false;
}

bool detectCycle(unordered_map<int,vector<int>> mp,int n,vector<int>& vis){


  for(int i=0;i<n;i++){
      
      if(vis[i]==0){
           if(dfs(mp,i,-1,vis)){
               return true;
          }
      }
  } 
  
  return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)//coding nijas
{
    unordered_map<int,vector<int>> mp;
    vector<int> vis(n+1,0);
    for(auto x:edges){
        mp[x[0]].push_back(x[1]);
        mp[x[1]].push_back(x[0]);
    }
    if(detectCycle(mp, n, vis)){
        return "Yes";
    }else{
        return "No";
    }
}
