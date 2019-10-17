#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> adj[5];



for(int i=0;i<5;i++){
   //cout<<adj[i].size()<<endl;
   vector<int> t(5);
   adj[i]=t;
  for(int j=0;j<5;j++){
	adj[i][j]=0;
  }
}

for(int i=0;i<5;i++){
   for(int j=0;j<5;j++){
       cout<<adj[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}
