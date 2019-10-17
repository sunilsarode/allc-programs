/*Dijkstra's Algorithm does not try to find a shorter path to vertices which are already extracted from queue and hence 
can not work on negative weights

https://stackoverflow.com/questions/13159337/why-doesnt-dijkstras-algorithm-work-for-negative-weight-edges/38786012

*/ 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//defining max value for array  
#define max 3010
//distance array to store the distance 
ll dis[max];
//visit array to get that the node is already visited or not ?
bool vis[max];

int par[max];

//init funtion will initialise all the element to 1e12 in distance array and false to visited array  
void init();
void dijkstra(int s,vector<pair<ll,int>>* v);


int main(){
int t;
scanf("%d",&t);
while(t-->0){
init();
int n,m,x,y,s;
ll w;
vector<pair<ll,int>> vec[max];
scanf("%d %d",&n,&m);

for(int i=0;i<m;i++){
  scanf("%d %d %lld",&x,&y,&w);
  vec[x].push_back(make_pair(w,y));
  vec[y].push_back(make_pair(w,x));
}

scanf("%d",&s);

dijkstra(s,vec);
for(int i=1;i<=n;i++){
  if(i==s){
    continue;
  }
 if(vis[i]==true){
  
   printf("%lld ",dis[i]);
  }else{
   printf("%d ",-1);
  
 }
}

printf("\n");
for(int i=0;i<=n;i++){
   cout<<par[i]<<" ";
}
cout<<endl;
}


return 0;
}

void dijkstra(int s,vector<pair<ll,int>>* vec){
    
  priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> Q;
  dis[s]=0;
  Q.push(make_pair(0,s));

 while(!Q.empty()){
  
   pair<ll,int> p=Q.top();
   Q.pop();

   int x=p.second;
   
   if(vis[x]==true){
     continue;
   }
   
   vis[x]=true;

   for(int i=0;i<vec[x].size();i++){
      int v=vec[x][i].second;
      ll w=vec[x][i].first;
     
      if(dis[v]>w+dis[x]){
        dis[v]=dis[x]+w;
        par[v]=x;
        Q.push(make_pair(dis[v],v));
     }
   }

 }

}

void init(){

for(int i=0;i<max;i++){
  vis[i]=false;
  dis[i]=1e12;
  par[i]=0;
}
}
