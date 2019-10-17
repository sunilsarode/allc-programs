#include<bits/stdc++.h>
using namespace std;
#define max 10001
vector<int> vec[max];
bool vis[max];
bool dfs(int x,int p);
int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int n,m,x,y;

cin>>n>>m;
for(int i=0;i<m;i++){
  cin>>x>>y;
  vec[x].push_back(y);
  vec[y].push_back(x);
}

bool var=dfs(1,0);
bool noCycle=true;
if(var){
  noCycle=false;
  cout<<"NO"<<endl;
}
bool discon=false;
if(noCycle){
  for(int i=1;i<=n;i++){
      if(vis[i]==false){
          discon=true;
          break;
      }
  }
  if(discon){
     cout<<"NO"<<endl;
  }else{
     cout<<"YES"<<endl; 
  }
}

return 0;
}
bool dfs(int x,int p){

vis[x]=true;
for(int i=0;i<vec[x].size();i++){
  if(vis[vec[x][i]]==false){
      dfs(vec[x][i],x); 
  }
  else if(vec[x][i]!=p){
     return true; 
  }
}
return false;

}
