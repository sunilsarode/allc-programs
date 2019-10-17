#include<bits/stdc++.h>

using namespace std;

struct Data{

   int i;
   int j;
   string s;
   int dis;
};

struct cmp{
   bool operator()(Data d1,Data d2){
         if(d1.s.size()==d2.s.size()){
              //return d2.s.compare(d1.s);
              return strcmp(d1.s.c_str(),d2.s.c_str());  
              //return d2.s>d1.s;    
         }
         return d1.dis>d2.dis;              
   }
};

int main(){

 int n,m;
 cin>>n>>m;

 vector<vector<char>> arr(n,vector<char>(m));



 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     cin>>arr[i][j];
  }
 }


 int qr;
 cin>>qr;
 int sx,sy,ex,ey;
 while(qr--){
  
   vector<vector<int>> vis(n,vector<int>(m,0));
   cin>>sx>>sy>>ex>>ey;
   --sx;
   --sy;
   --ex;
   --ey;
   //cout<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<endl;

    Data d;
    d.i=sx;
    d.j=sy;
    d.s="";
    d.dis=0;
    vis[sx][sy]=1;
    priority_queue<Data,vector<Data>,cmp> pq;
    
    pq.push(d);
    int f=0;
    while(!pq.empty()){
        
        Data in=pq.top();
        pq.pop();
        int i=in.i;
        int j=in.j;
        //cout<<in.s<<" "<<i<<" "<<j<<endl;
        
        if(i==ex&&j==ey){
             cout<<in.s<<endl;/*" "<<i<<" "<<j<<endl;*/
             f=1;
             
             break;
        }
        
        if(i+1<n&&vis[i+1][j]==0&&arr[i+1][j]!='#'){
             Data newd;
             newd.i=i+1;
             newd.j=j;
             newd.s+=in.s;
             newd.s+="D";
             vis[i+1][j]=1;
             newd.dis+=in.dis+1;
             pq.push(newd);
        }

        if(i-1>=0&&vis[i-1][j]==0&&arr[i-1][j]!='#'){
             Data newd;
             newd.i=i-1;
             newd.j=j;
             newd.s+=in.s;
             newd.s+="U";
             vis[i-1][j]=1;
             newd.dis+=in.dis+1;
             pq.push(newd);
        }
        if(j-1>=0&&vis[i][j-1]==0&&arr[i][j-1]!='#'){
             Data newd;
             newd.i=i;
             newd.j=j-1;
             newd.s+=in.s;
             newd.s+="L";
             vis[i][j-1]=1;
             newd.dis+=in.dis+1;
             pq.push(newd);
        }
        if(j+1<m&&vis[i][j+1]==0&&arr[i][j+1]!='#'){
             Data newd;
             newd.i=i;
             newd.j=j+1;
             newd.s+=in.s;
             newd.s+="R";
             vis[i][j+1]=1;
             newd.dis+=in.dis+1;
             pq.push(newd);
        }
  
    }    

    if(f==0){
        cout<<"Impossible"<<endl;
    }
 }
 

return 0;
}
/*
5 5
.....
..#..
.....
#.##.
.#...
3
1 3 3 4
1 1 5 5
1 1 1 5
*/
