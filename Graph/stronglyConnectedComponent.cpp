#include<bits/stdc++.h>

using namespace std;

void setVis(vector<int>& vis){
for(int i=0;i<vis.size();i++){
   vis[i]=0;
}
}

void dfs(int v,stack<int>& st,vector<int> adj[],vector<int>& vis){
   vis[v]=1;
   
   for(int i=0;i<adj[v].size();i++){
       int x=adj[v][i];
       if(vis[x]==0){
          dfs(x,st,adj,vis);
       }
   }
   st.push(v);
}

void dfsafterT(int v,vector<int> adj[],vector<int>& vis,vector<int>& arr){
   
   vis[v]=1;
   arr.push_back(v);
   for(int i=0;i<adj[v].size();i++){
       int x=adj[v][i];
       if(vis[x]==0){
           dfsafterT(x,adj,vis,arr);
       }
   }
}

int main(){

int v,e;
cin>>v>>e;
vector<int> adj[v+1];
vector<int> adjT[v+1];

int x,y;
for(int i=0;i<e;i++){
   cin>>x>>y;
   adj[x].push_back(y);
}

stack<int> st;
//intially all values are bydefault zero
vector<int> vis(v+1);

//assuming vertex are distinct and numbered from 1 to v
for(int i=1;i<=v;i++){
    if(vis[i]==0){
        dfs(i,st,adj,vis);
    }
}

//transpose of the graph
for(int i=1;i<v+1;i++){
  vector<int> arr=adj[i];
  for(int j=0;j<arr.size();j++){
     adjT[arr[j]].push_back(i);
  }
}

//set all values to zero for next dfs 
setVis(vis);

vector<vector<int>> scc;
while(!st.empty()){
   cout<<st.top()<<" ";
   int x=st.top();
   st.pop();
   
   if(vis[x]==0){
       vector<int> arr;
       dfsafterT(x,adjT,vis,arr);
       scc.push_back(arr);
   }   
} 
cout<<"\n";

for(auto arr:scc){
   for(auto v:arr){
      cout<<v<<" ";
   }
   cout<<"\n";
}



}
