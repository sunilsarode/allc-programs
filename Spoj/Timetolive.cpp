#include<bits/stdc++.h>
using namespace std;
#define max 100005
bool vis[max];
int path[max];
void dfs(int x,vector<int>* vec);
void init();
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL);


int t;
cin>>t;
while(t-->0){
init();
vector<int> vec[max];
int n,x,y;
cin>>n;

for(int i=0;i<n-1;i++){
   cin>>x>>y;
   vec[x].push_back(y);
   vec[y].push_back(x);  
}


dfs(0,vec);


int m=0,m1=0,in;

for(int i=0;i<n;i++){
  if(m1<path[i]){
    m1=path[i];
    in=i;
 }
}
/*for(int i=0;i<n;i++){
  cout<<path[i]<<" ";
}*/

//initialize visited array and path array for second dfs
init();

//passing "in" where we find the max path after first dfs
dfs(in,vec);

//finding longest path
for(int i=0;i<n;i++){
   if(m<path[i]){
      m=path[i];
  }
}
//cout<<m<<endl;


// placing the router at center for min TTL
if(m%2==0){
   cout<<m/2<<endl;
}else{
   cout<<(m+1)/2<<endl;
}

}

return 0;
}

void dfs(int x,vector<int>* vec){
  vis[x]=true;
  
 for(int i=0;i<vec[x].size();i++){
    if(vis[vec[x][i]]==false){
        path[vec[x][i]]=1+path[x];
        dfs(vec[x][i],vec);
    }
 }

}

void init(){
  for(int i=0;i<max;i++){
    vis[i]=false;
    path[i]=0;
  } 
}
