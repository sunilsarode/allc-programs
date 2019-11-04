#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int dfs(vector<pair<ll,ll>> adj[],ll s,int vis[],int parent[]){
 
     vis[s]=1;
     int ans=0;

    for(int i=0;i<adj[s].size();i++){
         if(vis[adj[s][i].second]==0){
            int x=adj[s][i].second;
            parent[x]=s;
            ans+=dfs(adj,x,vis,parent);
         }
    }
      ans+=1;
     return ans;
}

int main(){

ll n,e,x,y,w;

cin>>n>>e;

vector<pair<ll,ll>> adj[n+1];
int vis[n+1]={0};
int parent[n+1]={0};


for(int i=0;i<e;i++){
    cin>>x>>y>>w;
    adj[x].push_back(make_pair(w,y));
    adj[y].push_back(make_pair(w,x));
}


int s;
cin>>s;

cout<<"Ans "<<dfs(adj,s,vis,parent)<<endl;

for(int i=1;i<n+1;i++){
   cout<<i<<" "<<parent[i]<<" ";
}
cout<<endl;
for(int i=0;i<n+1;i++){
  cout<<vis[i]<<" ";
}

return 0;
}
