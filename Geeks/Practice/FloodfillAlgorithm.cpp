#include<bits/stdc++.h>
using namespace std;
int n,m;

int arr[1000][1000];
int vis[1000][1000];
void fun(int i,int j,int k,int o){

  if(i<0||i>n-1||j<0||j>m-1||arr[i][j]!=o)
       return ;

  if(vis[i][j]==1)
       return;


  vis[i][j]=1;
 
  if(arr[i][j]==o){
     arr[i][j]=k;
  }
  
  
  fun(i-1,j,k,o);
  fun(i+1,j,k,o);
  fun(i,j-1,k,o);
  fun(i,j+1,k,o);
}

int main(){
int t;
cin>>t;
while(t--){

cin>>n>>m;

for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
    cin>>arr[i][j];
    vis[i][j]=0;
  } 
}
int x,y,k;
cin>>x>>y>>k;

fun(x,y,k,arr[x][y]);

for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
  } 
}
cout<<endl;
}//end of while
return 0;
}


