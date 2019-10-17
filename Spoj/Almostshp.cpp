#include<bits/stdc++.h>
using namespace std;
#define max 510
bool vis[max];
int dis[max];

void dij(int s,vector<pair<int,int>> *vec,set<int>* st);
void init();
void dfs(int d,vector<pair<int,int>> *vec,set<int>* st);

int main(){

int n,m,s,d,x,y,w;
while(scanf("%d%d",&n,&m)!=EOF){

if(n==0&&m==0){
  break;
}

vector<pair<int,int>> vec[max];
set<int> st[max];
init(); 
scanf("%d%d",&s,&d);

for(int i=0;i<m;i++){
   scanf("%d%d%d",&x,&y,&w);
   vec[x].push_back(make_pair(w,y));
}

dij(s,vec,st);

dfs(d,vec,st);

init();
dij(s,vec,st);
  
 if(vis[d]==false){
    printf("%d\n",-1);
 }else{
    printf("%d\n",dis[d]); 
 }


}//end of while
return 0;
}

void dfs(int d,vector<pair<int,int>> *vec,set<int>* st){

 
 set<int> ::iterator itr;

 for(itr=st[d].begin();itr!=st[d].end();++itr){
        //if(vis1[*itr]==false){
          vector<pair<int,int>> v=vec[*itr];
          vector<pair<int,int>>::iterator it;
          for(it=v.begin();it!=v.end();){
             if(it->second==d){
                   it=v.erase(it);
             }else{
                ++it;
             }
             
           }
          vec[*itr]=v;
          dfs(*itr,vec,st);    
        //}           
 }

}



void dij(int s,vector<pair<int,int>> *vec,set<int>* st){
 
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
dis[s]=0;
Q.push(make_pair(0,s));
//st[s].insert(-1);
 while(!Q.empty()){
    
   pair<int,int> p=Q.top();
   Q.pop();
   
   int x=p.second;
   
   if(vis[x]==true){
      continue;
   } 
    vis[x]=true;

   for(int i=0;i<vec[x].size();i++){
       int e=vec[x][i].second;
       int w=vec[x][i].first;
       if(dis[e]>=dis[x]+w){

           if(dis[e]>dis[x]+w){
               st[e].clear();
               st[e].insert(x);
            }else{
               st[e].insert(x);
            }
            dis[e]=dis[x]+w;
            Q.push(make_pair(dis[e],e));
       }
   }
 }//end while
}

void init(){

for(int i=0;i<max;i++){
 vis[i]=false;
 dis[i]=1e9;
}
}
