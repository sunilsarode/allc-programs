#include<bits/stdc++.h>
using namespace std;
#define max 100005
bool vis[max];
vector<int> vec[max];
int c=0;
void dfs(int x);
int main(){
int n,m,x,y;
cin>>n>>m;
for(int i=0;i<m;i++){
 cin>>x>>y;
 vec[x].push_back(y);
 vec[y].push_back(x); 
}
//cout<<vec[1].size()<<endl;
int b=0;
for(int i=1;i<=n;i++){
 if(vis[i]==false){
    
     dfs(i);
     if(b<(c/2)){
         b=c/2;
     }
 //   cout<<c<<" "<<b<<endl;
     c=0;
  }
}
cout<<b<<endl;
return 0;
}

void dfs(int x){
vis[x]=true;

for(int i=0;i<vec[x].size();i++){
   c++;
   if(vis[vec[x][i]]==false){
     
      dfs(vec[x][i]);
  }
}

}
