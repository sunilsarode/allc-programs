#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> adj[100];

int n,e,x,y;
cin>>n>>e;

for(int i=0;i<e;i++){
   cin>>x>>y;
   adj[x].push_back(y);
}

for(int i=1;i<=n;i++){
   //cout<<adj[i].size()<<endl;
  for(int j=0;j<adj[i].size();j++){
	cout<<i<<" "<<adj[i][j]<<" ";
  }
  cout<<endl;
}

return 0;
}
