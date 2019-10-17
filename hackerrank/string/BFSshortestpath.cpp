#include<bits/stdc++.h>
using namespace std;
#define max 1010
bool vis[max];
int dis[max];
void init();
int main(){
int q;
cin>>q;

while(q-->0){

  init();
  int n,e,x,y;
  cin>>n>>e;

  vector<int> vec[n+1];
  for(int i=0;i<e;i++){
     cin>>x>>y;
     vec[x].push_back(y);
     vec[y].push_back(x);
  }

  int s;
  cin>>s;

  queue<int> q;
  q.push(s);
  dis[s]=0;
  vis[s]=true;
  while(!q.empty()){
  
    int x=q.front();
    q.pop(); 
    
    for(int i=0;i<vec[x].size();i++){
         if(vis[vec[x][i]]==false){
              q.push(vec[x][i]);
              dis[vec[x][i]]=dis[x]+1;
              vis[vec[x][i]]=true;
        }
    }
 
  }
  
  for(int i=1;i<=n;i++){
     if(s==i){
        continue;    
      }

       if(vis[i]==true){
            cout<<dis[i]*6<<" ";  
       }else{
            cout<<-1<<" ";
       }
  }
  cout<<endl;
}
return 0;
}



void init(){

 for(int i=0;i<max;i++){
    vis[i]=false;
    dis[i]=0;
 }
}
