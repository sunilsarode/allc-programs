#include<bits/stdc++.h>

using namespace std;

struct Data{
    int i;
    int j;
    int dis;
};

int main(){
    
      int n,m,Q;
      cin>>n>>m>>Q;
   
      vector<vector<char>> adj(n,vector<char>(m));

      vector<vector<int>> ans(n,vector<int>(m,-1));
      vector<vector<int>> vis(n,vector<int>(m,0));
   
      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            cin>>adj[i][j];
        }
      }
 
      int si,sj;
      cin>>si>>sj;
      si--;
      sj--;
      if(adj[si][sj]=='*'){
          cout<<-1<<endl;
          return 0;
      }

      ans[si][sj]=0;
      vis[si][sj]=1;

      int di,dj;
      
      queue<Data> q;
   
      Data d;
      d.dis=0;
      d.i=si;
      d.j=sj;
      q.push(d);

      while(!q.empty()){

        Data f=q.front();
        q.pop();
        
        //if it is destination break

        int i=f.i;
        int j=f.j;
    
        
        if(i-1>=0&&adj[i-1][j]!='*'&&vis[i-1][j]==0){
            Data newd;
            newd.i=i-1;
            newd.j=j;
            newd.dis=1+f.dis;
            ans[i-1][j]=1+f.dis;
            vis[i-1][j]=1;
            q.push(newd);
        }
        if(i+1<n&&adj[i+1][j]!='*'&&vis[i+1][j]==0){
            Data newd;
            newd.i=i+1;
            newd.j=j;
            newd.dis=1+f.dis;
            ans[i+1][j]=1+f.dis;
            vis[i+1][j]=1;
            q.push(newd);
        }

        if(j-1>=0&&adj[i][j-1]!='*'&&vis[i][j-1]==0){
            Data newd;
            newd.i=i;
            newd.j=j-1;
            newd.dis=1+f.dis;
            ans[i][j-1]=1+f.dis;
            vis[i][j-1]=1;
            q.push(newd);
        }

        if(j+1<m&&adj[i][j+1]!='*'&&vis[i][j+1]==0){
            Data newd;
            newd.i=i;
            newd.j=j+1;
            newd.dis=1+f.dis;
            ans[i][j+1]=1+f.dis;
            vis[i][j+1]=1;
            q.push(newd);
        }

     }
       

      while(Q--){
      
         cin>>di>>dj; 

         cout<<ans[di-1][dj-1]<<endl;  
 
      }
       
    return 0;
}
