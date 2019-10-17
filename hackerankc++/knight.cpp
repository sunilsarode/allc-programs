#include<bits/stdc++.h>
using namespace std;
int vis[50][50];

class Data{
    

    public:
    
    int x;
    int y;
    int dis;
    Data(){
        
    }
    
    Data(int s1,int s2,int d){
        x=s1;
        y=s2;
        dis=d;
    }
    
    
};
void init(){
    
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
             vis[i][j]=false;
        }
    }
}

int isInRange(int x,int y,int n){
    //x is for row and y for column
    if(x>=0&&x<n&&y>=0&&y<n){
        return true;
    }

    return false;
}
int getdis(int s1,int s2,int n){

        int disx[]={2,2,-2,-2,1,-1,1,-1};
        int disy[]={-1,1,-1,1,2,2,-2,-2};
        
        queue<Data> q;
        Data d(0,0,0);
       
        q.push(d);
        vis[0][0]=1; 
        while(!q.empty()){
            
            Data obj=q.front();
            q.pop();
            //cout<<obj.x<<" "<<obj.y<<" "<<obj.dis<<endl;
            if(obj.x==n-1&&obj.y==n-1){
                //cout<<obj.dis<<endl;
                return obj.dis;
                
            }
            
            
            for(int i=0;i<8;i++){
                int x=obj.x+disx[i];
                int y=obj.y+disy[i];
                if(vis[x][y]==0&&isInRange(x,y,n)){
                    Data newd(x,y,obj.dis+1);
                    vis[x][y]=1;
                    q.push(newd);
                }
            }
        }
        
       return -1;
}
int main(){
    
    
    int n;
    cin>>n;
    
    //cout<<getdis(1,1,5)<<endl;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
           init();
           cout<<getdis(i,j,n)<<" ";
       }
           cout<<endl;
    }
        
    
    return 0;
    
}
