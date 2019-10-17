#include<bits/stdc++.h>
/*

5 7
1 2 0
1 3 0
1 4 0
2 3 0
3 4 0
4 5 0
3 5 0


*/
using namespace std;
typedef long long ll;
int main(){

int n,e,x,y;
cin>>n>>e;
queue<int> q;
vector<pair<ll,int>> adj[n+1];
int vis[n+1]={0};
int dis[n+1]={0};
int parent[n+1]={0};
ll w;
for(int i=0;i<e;i++){
   cin>>x>>y>>w;
   adj[x].push_back(make_pair(w,y));
   adj[y].push_back(make_pair(w,x));
}

int h;
q.push(1);
dis[1]=0;
vis[1]=1;

while(!q.empty()){
   h=q.front();
   q.pop();
   for(int i=0;i<adj[h].size();i++){
    if(vis[adj[h][i].second]==1){
       continue;
     }
    vis[adj[h][i].second]=1;
    dis[adj[h][i].second]=dis[h]+1;
    parent[adj[h][i].second]=h;
    q.push(adj[h][i].second);
   }
}

for(int i=1;i<=n;i++){
  cout<<dis[i]<<" ";
}
cout<<endl;

for(int i=1;i<=n;i++){
  cout<<parent[i]<<" ";
}
cout<<endl;
return 0;
}
