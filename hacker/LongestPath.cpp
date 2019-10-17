#include<bits/stdc++.h>
const int MAX=1e5+10;
using namespace std;
vector<int> vec[MAX];
bool visited[MAX];
int w[MAX];
int path[MAX]={0};
void dfs(int x);
void init(int n);
int m=0;

int n,k;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 


cin>>n>>k;

for(int i=1;i<=n;i++){
   cin>>w[i];
}
int x,y;

for(int i=0;i<n-1;i++){
   cin>>x>>y;
   vec[x].push_back(y);
   vec[y].push_back(x);
   
}

for(int i=1;i<=n;i++){
  
   if(w[i]%k==0){
     init(n);
     dfs(i);
    }

  for(int j=1;j<=n;j++){
    cout<<path[j]<<" ";
    if(m<path[j]) {
        m=path[j];
        if(m==n-1){
            i=n;
            break;
        }
    }
  }
  cout<<endl;
}

cout<<m<<endl;
return 0;

}	
void init(int n){
 for(int i=1;i<=n;i++){
     visited[i]=false;
     path[i]=0;
  }
}
void dfs(int x){

 visited[x]=true;
 for(int i=0;i<vec[x].size();i++){
   if(visited[vec[x][i]]==false){
       
       if(w[vec[x][i]]%k==0&&w[x]%k==0){
          
           path[vec[x][i]]=1+path[x];
        }
       dfs(vec[x][i]);
       
    }
  }
}
