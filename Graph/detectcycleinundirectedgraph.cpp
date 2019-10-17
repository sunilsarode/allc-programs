#include<bits/stdc++.h>

using namespace std;

#define max 1000

typedef long long int ll;

vector<int> vis(max,0);
vector<int> par(max,0);



bool dfs(vector<pair<ll,int>> adj[],int v){
    vis[v]=1;
 
    for(int i=0;i<adj[v].size();i++){
         int x=adj[v][i].second;
         if(vis[x]==1&&par[v]!=x){//jar node visited ahe ani maja parent sudha nahi ahe mag cycle ahe
                return true;//cycle is detected 
         }
         if(vis[x]==0){
             par[x]=v;
             if(dfs(adj,x)){//do not discover more node as you detect the cycle , return true from here
                return true;
             } 
         }
    }  
   return false;
}

bool detectCycle(vector<pair<ll,int>> adj[],int n){

  par[0]=-1;
  for(int i=0;i<n;i++){
      
      if(vis[i]==0){
           if(dfs(adj,i)){
               return true;
          }
      }
  } 
  
  return false;
}

int main(){

int n,e,x,y;


vector<pair<ll,int>> adj[max];

cin>>n>>e;

for(int i=0;i<e;i++){
   cin>>x>>y;
   adj[x].push_back(make_pair(0,y));
   adj[y].push_back(make_pair(0,y));
}


 bool ans=detectCycle(adj,n);
 cout<<ans<<endl;

return 0;	
}
