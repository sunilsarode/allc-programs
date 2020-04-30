#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void dfs(unordered_map<int,int>& mp,vector<int>& vis,int v,int &c){
 
   vis[v]=1;
   c++;
   
      int x=mp[v];
      //cout<<v<<" "<<x<<" "<<"\n";
      if(vis[x]==0&&mp.find(x)!=mp.end()){
        dfs(mp,vis,x,c);
      }
   
}

int main(){
  int n;
  cin>>n;
  unordered_map<int,int> mp;
  int x;
  for(int i=0;i<n;i++){
     cin>>x;
     mp[i+1]=x;
  }
  //cout<<mp.size()<<"\n";
  vector<int> vis(n);
  int f=0;
  for(auto v:mp){
     int c=0;
     if(vis[v.first]==0){
	dfs(mp,vis,v.first,c);
        //cout<<c<<"\n";
        if(c==3){
           f=1;
           break;
        } 
         
     }
  }
  
  if(f){
    cout<<"YES"<<"\n";
  }else{
    cout<<"NO"<<"\n";
  } 
}
