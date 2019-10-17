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

int main(){
    
    int disx[]
    int t;
    cin>>t;
    while(t--){
        init();
        int n,m,s1,s2,d1,d2;
        cin>>n>>m;
        cin>>s1>>s2>>d1>>d2;
        
        int dis=0;
        
        queue<Data> q;
        Data d(s1,s2,0);
       
        q.push(d);
        
        while(!q.empty()){
            
            Data obj=q.top();
            q.pop();
            if(obj.x==d1&&obj.y==d2){
                dis=obj.dis;
                break;
            }
            
            
        }
    }
    return 0;
    
}
