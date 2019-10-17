#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dis[50010]={0};
bool vis[50010];
void dfs(vector <pair<ll,ll>>* vec,ll x);
void init();
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 


int t=0;
cin>>t;

while(t-->0){
init();
int n;
cin>>n;
ll x,y,w;
vector<pair<ll,ll>> vec[n+1];
for(int i=0;i<n-1;i++){
 cin>>x>>y>>w;
 vec[x].push_back(make_pair(w,y));
 vec[y].push_back(make_pair(w,x));
 
}
dfs(vec,1);
ll m=0,m1=0;
int in;
/*for(int i=1;i<=n;i++){
   cout<<dis[i]<<" ";
}*/
for(int i=1;i<=n;i++){
  if(m1<dis[i]){
     m1=dis[i];
     in=i;
  }
}
//cout<<endl;
//cout<<in<<endl;
init();
dfs(vec,in);
/*for(int i=1;i<=n;i++){
   cout<<dis[i]<<" ";
}*/
for(int k=1;k<=n;k++){
     if(m<dis[k]) {
        m=dis[k];
    }
}
cout<<m<<endl;
}
return 0;
}

void init(){
 for(int i=0;i<50010;i++){
   dis[i]=0;
   vis[i]=false;
   
 }
}
void dfs(vector <pair<ll,ll>>* vec,ll x){
 
   vis[x]=true;
  
  for(int i=0;i<vec[x].size();i++){
     if(vis[vec[x][i].second]==false){
        dis[vec[x][i].second]+=(dis[x]+vec[x][i].first);
       dfs(vec,vec[x][i].second);
   }
  }


}

