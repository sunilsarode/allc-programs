#include<bits/stdc++.h>

using namespace std;

void dfs(int v,int start,int &count,vector<int> adj[],vector<int>& vis){
   
  if(vis[v]==1){
     if(start==v){
        count++;	
     }
     return;
  }
   vis[v]=1;
   
   for(int i=0;i<adj[v].size();i++){
       int x=adj[v][i];
       dfs(x,start,count,adj,vis);
       
   }
   vis[v]=0;
   
}



int main(){

int v,e;
cin>>v>>e;
vector<int> adj[v+1];

int x,y;
for(int i=0;i<e;i++){
   cin>>x>>y;
   adj[x].push_back(y);
}

//intially all values are bydefault zero
vector<int> vis(v+1);

//assuming vertex are distinct and numbered from 1 to v
for(int i=1;i<=v;i++){
   
        int count=0;
        dfs(i,i,count,adj,vis);
        cout<<count<<"\n";
        //vis[i]=1;
}


}

/*
7 9
1 1
1 2
2 3
3 1
3 4
4 5
5 6
6 4
7 6
*/
