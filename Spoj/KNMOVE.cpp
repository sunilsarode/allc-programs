#include<bits/stdc++.h>

using namespace std;

   int arrx[]={2,2,-2,-2,1,-1,1,-1};
   int arry[]={-1,1,-1,1,2,2,-2,-2};


int inrange(int i,int j){
 
    if(i<0||i>=3||j<0||j>=3){
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

void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& dis){

 
	  queue<Data> q;
	  
	  Data d;
	  d.i=i;
	  d.j=j;
	  d.dis=0;
	  vis[i][j]=1;

	  q.push(d);


	  while(!q.empty()){
	     Data in=q.front();
	     q.pop();
	     cout<<in.i<<" "<<in.j<<endl;

             /* if(in.i==0&&in.j==0){
                 cout<<in.dis<<endl;
                 dis[in.i][in.j]=in.dis;
                 break;
              }*/	

	     for(int i=0;i<8;i++){
	   
		      int x=arrx[i]+in.i;
		      int y=arry[i]+in.j;

		     if(inrange(x,y)&&vis[x][y]==0){
			 vis[x][y]==1;
			 Data newd;
			 newd.i=x;
			 newd.j=y;
			 newd.dis=1+in.dis;
			 dis[x][y]=newd.dis;
			 q.push(newd);
		      } 
		     
	    }
	 }

}


int main(){


  //vector<vector<int>> arr(8,vector<int>(8,0));
  vector<vector<int>> vis(1000,vector<int>(1000,0));
  vector<vector<int>> dis(1000,vector<int>(1000,0));

 //for(int i=0;i<1000;i++){
   // for(int j=0;j<1000;j++){
         vector<vector<int>> vis(3,vector<int>(3,0)); 
         bfs(0,0,vis,dis);
    //}
 //}

 

/*int t;
cin>>t;

while(t--){


  int a,b;
  cin>>a>>b;
  --a;
  --b;
  cout<<dis[a][b]<<endl;


}*/



return 0;
}
