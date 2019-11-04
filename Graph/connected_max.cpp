#include<bits/stdc++.h>
using namespace std;


void dfs(vector<pair<int,int>> adj[],int s,vector<int>& vis,int& c){
   
  vis[s]=1;
  c++;
  for(int i=0;i<adj[s].size();i++){

      int v=adj[s][i].second;
      if(vis[v]==0&&v!=0){
          dfs(adj,v,vis,c);
      }
  }
}
int main(){

int n;
cin>>n;

vector<int> B(n-1,0);
vector<int> A(n-1,0);
vector<int> vis(n+1,0);

for(int i=0;i<n-1;i++){
   cin>>A[i];
}

for(int i=0;i<n-1;i++){
  cin>>B[i];
}

int q;
cin>>q;
vector<int> qr(q,0);
for(int i=0;i<q;i++){
   cin>>qr[i];
}

vector<pair<int,int>> adj[n+1];

for(int i=0;i<n;i++){
  
   adj[A[i]].push_back(make_pair(0,B[i]));
   adj[B[i]].push_back(make_pair(0,A[i]));
}

map<int,int> mp;

for(int i=0;i<n;i++){
   mp[A[i]]++; 
   mp[B[i]]++;
}


vector<int> ans;

   for(int i=0;i<qr.size();i++){

        vector<int> vis(n+1,0);
        int index=qr[i];
        index--;
        vector<pair<int,int>> invA=adj[A[index]];

        for(int k=0;k<invA.size();k++){
	     if(invA[k].second==B[index]){
                 invA[k]={0,0};
             }
        }
        adj[A[index]]=invA;
        vector<pair<int,int>> invB=adj[B[index]];

        for(int k=0;k<invB.size();k++){
	     if(invB[k].second==A[index]){
                 invB[k]={0,0};
             }
        }
        adj[B[index]]=invB;
        int maxc=INT_MIN;
	for(auto it:mp){
	   if(vis[it.first]==0){
               int c=0;
	       dfs(adj,it.first,vis,c);
	       maxc=max(maxc,c);
	   }
	}
       ans.push_back(maxc);
  } 

   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
   
return 0;
}


