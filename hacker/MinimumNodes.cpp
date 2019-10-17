#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define max 100005

vector<int> vec[max];
bool vis[max];
ll w[max]={0};
ll dis[max]={0};
int node[max]={0};

void dfs(int x);
void init(int n);
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int n,q,x,y,x1;
ll k;
cin>>n>>q;

for(int i=1;i<=n;i++){
   cin>>w[i];
}
for(int i=0;i<n-1;i++){
  cin>>x>>y;
  vec[x].push_back(y);
  vec[y].push_back(x);
  
}
while(q-->0){
cin>>x1>>k;
init(n);
   dis[x1]=w[x1];
   node[x1]=1;
   dfs(x1);
  
  int min=1e9;
  for(int i=1;i<=n;i++){
      if(dis[i]>=k){
        if(min>node[i]){
           min=node[i];
       }
    }
  }
  if(min!=1e9) 
  cout<<min<<endl;
  else
  cout<<-1<<endl;
  /*for(int i=1;i<=n;i++){
      cout<<dis[i]<<" ";
  }
    cout<<endl;
  for(int i=1;i<=n;i++){
      cout<<node[i]<<" ";    
  }*/

} //end while
return 0;
}
void init(int n){
 for(int i=0;i<max;i++){
  dis[i]=0;
  node[i]=0;
  vis[i]=false;
 }
}
void dfs(int x){
 vis[x]=true;

 for(int i=0;i<vec[x].size();i++){
     if(vis[vec[x][i]]==false){
        dis[vec[x][i]]=dis[x]+w[vec[x][i]];
        node[vec[x][i]]=1+node[x]; 
        dfs(vec[x][i]);
    }
 }

}
