#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prims(int i);
const int MAX=1e5+5;
vector<pair<ll,int>> vec[MAX];
bool mark[MAX];
int main(){
int node,edge,x,y;
ll mincost,w;

cin>>node>>edge;

for(int i=0;i<edge;i++){
  cin>>x>>y>>w;
  vec[x].push_back(make_pair(w,y));
  vec[y].push_back(make_pair(w,x));
}
 
mincost=prims(1);
cout<<mincost<<endl;
return 0;
}

ll prims(int x){
priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> q;

pair<ll,int> p;
ll mincost=0;
q.push(make_pair(0,x));
int y;

while(!q.empty()){
   p=q.top();
   q.pop();

    x=p.second;
   if(mark[x]==true){
      continue;
   }
   mincost+=p.first;
   mark[x]=true;

   for(int i=0;i<vec[x].size();i++){
     y=vec[x][i].second;
      if(mark[y]==false){
          q.push(vec[x][i]);
      }
   }
   
}
return mincost;
}
