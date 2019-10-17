#include<bits/stdc++.h>

using namespace std;

int inrange(int i,int j){
 
    if(i<0||i>=8||j<0||j>=8){
          return false;
    }
    
   return true;
}

bool check(int x, int y){
	return (min(x,y)>=0 && max(x,y)<8);
}

struct Data {
   int i;
   int j;
   int dis;
};

int main(){

int t;
cin>>t;


 int arrx[]={1,-1,1,-1,2,2,-2,-2};
  int arry[]={2,2,-2,-2,1,-1,1,-1};

 /*  int arrx[]={2,2,-2,-2,1,-1,1,-1};
   int arry[]={-1,1,-1,1,2,2,-2,-2};*/

while(t--){




  vector<vector<int>> arr(8,vector<int>(8,0));
  vector<vector<int>> vis(8,vector<int>(8,0));
  string s,e;
  cin>>s>>e;

  int si=s[0]-'a';
  int sj=s[1]-'0';
  
  sj--;
  //cout<<si<<" "<<sj<<endl;
  int ei=e[0]-'a';
  int ej=e[1]-'0';
  
  ej--;
  //cout<<ei<<" "<<ej<<endl;
  queue<Data> q;
  
  Data d;
  d.i=si;
  d.j=sj;
  d.dis=0;
  vis[si][sj]=1;

  q.push(d);


  while(!q.empty()){
     Data in=q.front();
     q.pop();
 
     if(in.i==ei&&in.j==ej){
         cout<<in.dis<<endl;
         break;
     }
     for(int i=0;i<8;i++){
   
      int x=arrx[i]+in.i;
      int y=arry[i]+in.j;
     if(inrange(x,y)&&vis[x][y]==0){
         vis[x][y]==1;
         Data newd;
         newd.i=x;
         newd.j=y;
         newd.dis=1+in.dis;
         q.push(newd);
     } 
     
  }
}


 
  
  
}

return 0;
}
