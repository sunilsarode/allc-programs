#include<bits/stdc++.h>
using namespace std;
#define max 510
vector<pair<int,int>> vec[max];
bool vis[max];
int dis[max];

void dijkstra(int u);
void init();

int main(){
init();
//cout<<dis[6]<<endl;
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int n,x,y,w,u,q;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x>>y>>w;
    vec[x].push_back(make_pair(w,y));
    vec[y].push_back(make_pair(w,x)); 
}
cin>>u;

dijkstra(u);
cin>>q;
/*for(int i=0;i<=n;i++){
    cout<<dis[i]<<" ";
}*/
int de;
for(int i=0;i<q;i++){
  cin>>de;
 if(vis[de]==true)
    cout<<dis[de]<<endl;
 else
    cout<<"NO PATH"<<endl;
}

return 0;
}
void dijkstra(int u){
   
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q; 
    
   Q.push(make_pair(0,u));
   dis[u]=0;
   
   while(!Q.empty()){
     
     pair<int,int> p=Q.top();
     Q.pop();
     
     int x=p.second;
     if(vis[x]==true)
         continue;
      vis[x]=true;
     
    
     for(int i=0;i<vec[x].size();i++){
        pair<int,int> inp=vec[x][i];
        int v=inp.second;
        int w=inp.first; 
        if(dis[x]+w<dis[v]){
             dis[v]=dis[x]+w;
             Q.push(make_pair(dis[v],v));
        }
     }
 
   }
  
}
void init(){

for(int i=0;i<max;i++){
   dis[i]=1e9;
   vis[i]=false;
}
}
