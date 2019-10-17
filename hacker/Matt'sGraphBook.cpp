#include<bits/stdc++.h>
using namespace std;
void dfs(int x,int v);
vector<int> vec[100005];
bool vis[100005];
int main(){
int n,e,x,y,v;
cin>>n;
cin>>e;
for(int i=0;i<e;i++){
   cin>>x>>y;
  vec[x].push_back(y);
  vec[y].push_back(x);
}


cin>>v;
int start;
for(int i=0;i<=n;i++){
  if(i!=v){
     start=i;
     break;
  }
} 
dfs(start,v);
bool flag=true;
for(int i=0;i<n;i++){
  //cout<<vis[i]<<" ";
   if(i==v){
          continue;
   }
   if(vis[i]==false){
      flag=false;
      break; 
   }
}
if(flag)
cout<<"Connected";
else
cout<<"Not Connected";
return 0;
}

void dfs(int x,int v){
   vis[x]=true;
  for(int i=0;i<vec[x].size();i++){
     if(vec[x][i]==v){
        continue;
     }
      if(vis[vec[x][i]]==false){
        dfs(vec[x][i],v);
    }
 }

}
