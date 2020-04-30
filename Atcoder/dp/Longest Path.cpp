#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
const int maxv=1e5+5;

vector<int> arr[maxv];
vector<int> indeg(maxv);
vector<int> vis(maxv);
vector<int> dis(maxv);


void dfs(int i){
   vis[i]=1;
   for(auto v:arr[i]){
     --indeg[v];
       dis[v]=max(dis[v],1+dis[i]);
       if(indeg[v]==0){
          dfs(v);
       }
   }
}

int main(){

   int v,e;
   cin>>v>>e;
   
   int x,y;
   for(int i=0;i<e;i++){
      cin>>x>>y;
      arr[x].push_back(y);
      ++indeg[y];
   }

   for(int i=1;i<=v;i++){
      if(vis[i]==0&&indeg[i]==0){//start with vertices with indegree 0
         dfs(i);
      }
   }
   int ans=0;
   for(auto v:dis){
      //cout<<v<<" ";
      ans=max(ans,v);
   }
   cout<<ans<<"\n";
   
}
