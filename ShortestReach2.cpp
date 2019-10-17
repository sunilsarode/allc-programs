#include<bits/stdc++.h>
using namespace std;
#define max 3010
int dis[max];
bool vis[max];

void init();
void dijkstra(int s,vector<pair<int,int>>* v);

int main(){
int t;
scanf("%d",&t);
while(t-->0){
init();
int n,m,x,y,s;
vector<pair<int,int>> vec[max];
scanf("%d %d",&n,&m);

for(int i=0;i<max;i++){
  scanf("%d %d %d"&x,&y,&w);
  vec[x].push_back(make_pair(w,y));
  vec[y].push_back(make_pair(w,x))
}
int s;
scanf("%d",&s);

dijkstra(s,vec);


}

return 0;
}

void dijkstra(int s,vector<pair<int,int>>* v){
 
}

void init(){

for(int i=0;i<max;i++){
  vis[i]=false;
  dis[i]=1e9;
}
}
