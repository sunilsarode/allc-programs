#include<bits/stdc++.h>

using namespace std;

struct Data{
    int x;
    int y;
    int dis;
};
int arr[50][50];
int vis[50][50];

void init(){
      for(int i=0;i<50;i++){
            for(int j=0;j<50;j++){
                 vis[i][j]=0;
            }
    }
}

int inRange(int x,int y,int n,int m){
    if(x>=0&&x<n&&y>=0&&y<m){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        init();
        int n,m;
        cin>>n>>m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 cin>>arr[i][j];
            }
        }
        int d1,d2;
        cin>>d1>>d2;
        
        queue<Data> q;
        Data d;
        d.x=0;
        d.y=0;
        d.dis=0;
        q.push(d);
        vis[0][0]=1;
        int flag=1;
        

        if(arr[0][0]==0){
            cout<<-1<<endl;
            
        }else {
        
            int disx[]={1,-1,0,0};
            int disy[]={0,0,1,-1};
        
            while(!q.empty()){
            Data f=q.front();
            q.pop();
            if(f.x==d1&&f.y==d2){
                cout<<f.dis<<endl;
                flag=0;
                break;
            }
            
            for(int i=0;i<4;i++){
                int x=f.x+disx[i];
                int y=f.y+disy[i];
                if(inRange(x,y,n,m)&&vis[x][y]==0&&arr[x][y]==1){
                     vis[x][y]=1;
                     Data newd;
                     newd.x=x;
                     newd.y=y;
                     newd.dis=f.dis+1;
                     q.push(newd);
                 }
             }
            
         }
      
         if(flag){
            cout<<-1<<endl;
        }
     }      
        
    }
    return 0;
}
