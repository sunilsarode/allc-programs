#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 3010

bool vis[max];
void mst(int s,vector<pair<ll,int>> *vec);
void init();
int main(){
init();
int n,m,x,y,s;
ll w;
cin>>n>>m;
vector<pair<ll,int>> vec[max];
for(int i=0;i<m;i++){
  cin>>x>>y>>w;
  vec[x].push_back(make_pair(w,y));
  vec[y].push_back(make_pair(w,x));
}
cin>>s;

mst(s,vec);
return 0;
}

void mst(int s,vector<pair<ll,int>> *vec){
  
 ll mincost=0;
 priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> Q;
 
 Q.push(make_pair(0,s));

 while(!Q.empty()){

  pair<ll,int> p=Q.top();
  Q.pop(); 
  int x=p.second;
  if(vis[x]==true){
    continue;
  }
  vis[x]=true;
  mincost+=p.first;
  
  for(int i=0;i<vec[x].size();i++){
    int y=vec[x][i].second;
    if(vis[y]==false){
       Q.push(vec[x][i]);
    }
  }

 }

 cout<<mincost<<endl; 
 
}

void init(){
  for(int i=0;i<max;i++){
     vis[i]=false;
  }
}
