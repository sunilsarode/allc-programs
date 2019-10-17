#include<bits/stdc++.h>

using namespace std;

int main(){

    int INF=(int)1e9;
    int n,m;
    cin>>n>>m;

    vector<vector<int>> dis(n+1,vector<int>(n+1,INF));
    
     vector<vector<int>> par(n+1,vector<int>(n+1,0));
    int x,y,r;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(i==j){
               dis[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){

        cin>>x>>y>>r;
        dis[x][y]=r;
        par[x][y]=x;
    }
    for(int k=1;k<n+1;k++){
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(dis[i][j]>dis[i][k]+dis[k][j]){
                   dis[i][j]=dis[i][k]+dis[k][j];
                   par[i][j]=par[k][j];
                }
               // dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
               
            }
        }
    }

    for(int i=1;i<n+1;i++){
       for(int j=1;j<n+1;j++){
           cout<<par[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<n+1;i++){
       for(int j=1;j<n+1;j++){
           cout<<dis[i][j]<<" ";
       }
       cout<<endl;
    }
    int q;
    cin>>q;
    int s,e;
    while(q--){
       cin>>s>>e;
       if(dis[s][e]!=INF){
           cout<<dis[s][e]<<endl; 
           string path=to_string(e);
           
           int val=0;
	   while(val!=s){
             val=par[s][e];
             e=val;
             path+=(" "+to_string(val));
             
           }
           reverse(path.begin(),path.end()); 
           cout<<path<<endl;
       }else{
           cout<<-1<<endl;
       }
    }

    return 0;
}

