#include<bits/stdc++.h>
using namespace std;
 
int a[100][100],n;
int i,j, b[100][100];
struct go{
    int x=0,y=0,dem=0;
};
 
void init(){
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)b[i][j]=0;
    b[0][0]=1;
}
 
void out(){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++) cout <<a[i][j]<<" ";
        cout <<endl;
    }
}
 
void TRY(int x,int y){
    int dx[]={i,i,-i,-i,j,j,-j,-j};
    int dy[]={j,-j,j,-j,i,-i,i,-i};
    int xx,yy;
    queue<go> qu;
    go g, temp;   
    qu.push(g);
    while(!qu.empty()){
        temp=qu.front();
        qu.pop();
        for(int i=0;i<8;i++){
            xx=dx[i]+temp.x;
            yy=dy[i]+temp.y;
            if(xx>=0 and xx<n and yy>=0 and yy<n and b[xx][yy]==0){
                go gg;
                gg.x=xx, gg.y=yy, gg.dem=temp.dem+1;
                qu.push(gg);
                b[xx][yy]=1;
                if(xx==n-1 and yy==n-1){
                    a[x][y]=temp.dem+1;
                    return ;
                }
            }
        }
    }
    a[x][y]=-1;
}
int main(){
 
    int n;
    cin >>n;
    for( i=1;i<n;i++)
        for( j=1;j<n;j++){
            init();
            TRY(i,j);
        }
    a[n-1][n-1]=1;
    out();
 
}

