#include<bits/stdc++.h>
using namespace std;
bool vis[100005];
void dfs(vector<int>* vec,int x);
void init();
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int t=0;
cin>>t;
while(t-->0){
 init();
 int n,e;
 cin>>n;
 cin>>e;
 int x,y;
 vector<int> vec[n+1]; 
 for(int i=0;i<e;i++){
    cin>>x>>y;
    vec[x].push_back(y);
    vec[y].push_back(x);
 }
int ccount=0;
for(int i=0;i<n;i++){
 if(vis[i]==false){
    dfs(vec,i);
    ccount++;
 }
}
cout<<ccount<<endl; 
}

return 0;
}
void init(){
for(int i=0;i<100005;i++){
   vis[i]=false;
}

}
void dfs(vector<int> *vec,int x){
   vis[x]=true;
  for(int i=0;i<vec[x].size();i++){
     if(vis[vec[x][i]]==false){
       dfs(vec,vec[x][i]);
   }
 }
 
}
