#include<bits/stdc++.h>
const int MAX=1e4+10;
using namespace std;
vector<int> vec[MAX];
bool visited[MAX];
int path[MAX]={0};
void dfs(int x);
void init(int n);
int m=0;
int m1=0;
int in;
int n;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 


cin>>n;

int x,y;

for(int i=0;i<n-1;i++){
   cin>>x>>y;
   vec[x].push_back(y);
   vec[y].push_back(x);
   
}
dfs(1);

for(int k=1;k<=n;k++){
  // cout<<path[k]<<" ";
     if(m1<path[k]) {
        m1=path[k];
        in=k;
    }
  }
 // cout<<endl;
 // cout<<m1<<endl;
 // cout<<in<<endl;
   init(n);
   dfs(in);
   for(int k=1;k<=n;k++){
     if(m<path[k]) {
        m=path[k];
    }
  }
  

cout<<m<<endl;
return 0;

}	
void init(int n){
 for(int i=1;i<=n;i++){
     visited[i]=false;
     path[i]=0;
  }
}
void dfs(int x){

 visited[x]=true;
 for(int i=0;i<vec[x].size();i++){
   if(visited[vec[x][i]]==false){
       
          path[vec[x][i]]=1+path[x];
        
       dfs(vec[x][i]);
       
    }
  }
}
