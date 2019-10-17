#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

void bellman(vector<pair<ll,int>> arr[],int s,int n){
  ll INF=(int)1e12;
  vector<ll> dis(n+1,INF);
  vector<int> par(n+1,0);
  //make source dis 0
  dis[s]=0;
  for(int i=0;i<n-1;i++){
      for(int j=1;j<=n;j++){//j represents vertex
         for(int k=0;k<arr[j].size();k++){
 
             int v=arr[j][k].second;
             
             ll w=arr[j][k].first;
              if(dis[j]!=INF){
                  dis[v]=min(dis[v],dis[j]+w);
                  par[v]=j;
              }
         }
     }
  }
    
  for(int j=1;j<=n;j++){
        for(auto edge:arr[j]){
 
             int v=edge.second;
             ll w=edge.first;
              if(dis[j]!=INF&&dis[j]+w<dis[v]){
                  cout<<"negative weight cycle"<<endl;
              }
         }
  }
  //distance from source vertex
  for(int i=1;i<=n;i++){
     cout<<dis[i]<<" ";
  }
  cout<<endl;
  for(int i=1;i<=n;i++){
     cout<<par[i]<<" ";
  }

  
}

int main(){

int n,e;
cin>>n>>e;

vector<pair<ll,int>> arr[n+1];
int x,y;
ll w;
for(int i=0;i<e;i++){
   cin>>x>>y>>w;
   arr[x].push_back({w,y});
   //arr[y].push_back({w,y});//if graph is undirected and negative weights then it is negative weight cycle
//https://stackoverflow.com/questions/14785413/can-we-apply-the-bellman-ford-algorithm-to-an-undirected-graph
}
int s;
cin>>s;

bellman(arr,s,n);

return 0;
}

/*
5 7    
1 2 4
1 3 5
1 4 8
2 3 -3
4 5 2
5 4 1
3 5 4
1
0 4 1 6 5 
0 1 2 5 4

another input with negative weight cycle

4 4
1 2 1
2 3 3
3 4 2
4 2 -6
1
negative weight cycle
0 -2 2 4 
0 4 2 3 
*/
