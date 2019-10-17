#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dijkstra(ll c1,ll c2,vector<pair<ll,ll>>*vec,ll *dis,bool *vis);
int main(){

int t;
cin>>t;
while(t-->0){
ll n,m,c1,c2,x,y,w;
cin>>n>>m>>c1>>c2;

vector<pair<ll,ll>> vec[n+1];
ll dis[n+1];

for(int i=0;i<n;i++){
  dis[i]=1e9;
}
bool vis[n+1];
for(int i=0;i<m;i++){
  cin>>x>>y>>w;
  vec[x].push_back(make_pair(w,y));
  vec[y].push_back(make_pair(w,x));
}
dijkstra(c1,c2,vec,dis,vis);
/*for(int i=1;i<=n;i++){
    cout<<vis[i]<<" ";
}
cout<<endl;*/
if(vis[c2]!=false){
  
  cout<<dis[c2]<<endl;
}else{

  cout<<"NONE"<<endl; 
}
 /*for(int i=1;i<=n;i++){
    cout<<dis[i]<<" ";
 }*/
}
return 0;
}
void dijkstra(ll c1,ll c2,vector<pair<ll,ll>>*vec,ll *dis,bool *vis){
  
   multiset<pair<ll,ll>> mset;
   dis[c1]=0;
   mset.insert(make_pair(0,c1));
   
   while(!mset.empty()){
      
      pair<ll,ll> p=*mset.begin();
      mset.erase(mset.begin());
      
      ll x=p.second;
     // cout<<x<<endl;
      if(vis[x]){
          continue;
       }
  
      vis[x]=true;
    
      for(int i=0;i<vec[x].size();i++){
       
         pair<ll,ll> inp=vec[x][i];
         ll v=inp.second;
         ll w=inp.first; 

      //  cout<<dis[v]<<" ";
       // cout<<v<<" ";
        //cout<<w<<" "; 
        //cout<<dis[v]<<" ";
         if(dis[x]+w<dis[v]){
            dis[v]=dis[x]+w;
            mset.insert(make_pair(dis[v],v));
         }
      }
    
   }//while end

    
}
