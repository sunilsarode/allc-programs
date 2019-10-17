#include<bits/stdc++.h>

using namespace std;
struct Data{
    int x;
    int y;
};

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
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        queue<Data> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                
                if(arr[i][j]==2){
                    Data d;
                    d.x=i;
                    d.y=j;
                    q.push(d);
                }
            }
        }
        
        Data d;
        d.x=-1;
        d.y=-1;
        q.push(d);
        static int disx[]={1,-1,0,0};
        static int disy[]={0,0,1,-1};
        int count=0;
        while(q.size()>1){
            Data f=q.front();
            q.pop();
            if(f.x==-1&&f.y==-1){
                count++;
                Data t;
                t.x=-1;
                t.y=-1;
                q.push(t);
            }else{
                for(int i=0;i<4;i++){
                   int x=f.x+disx[i];
                   int y=f.y+disy[i];
                
                    if(inRange(x,y,n,m)&&arr[x][y]==1){
                    
                        arr[x][y]=2;
                        Data newd;
                        newd.x=x;
                        newd.y=y;
                    
                        q.push(newd);
                    }
                }   
            }
            
            
        }
        int flag=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    flag=0;  
                    break;
                }
            }
        }
        if(flag){
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;
        }
    }//end while for each test case
   
    return 0;
}
