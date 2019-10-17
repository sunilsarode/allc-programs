#include<bits/stdc++.h>
using namespace std;
int n;
int flag;
int arr[1000][1000];
int vis[1000][1000];
void fun(int i,int j,int d,int n){
//||arr[i][j]!=3||arr[i][j]!=1
  if(i<0||i>n-1||j<0||j>n-1||arr[i][j]==0)
       return ;

  if(vis[i][j]==1)
       return;
  if(flag==1)
       return;

  vis[i][j]=1;
 
  if(arr[i][j]==d){
    flag=1;
    return;
  }
  
  
  fun(i-1,j,d,n);
  fun(i+1,j,d,n);
  fun(i,j-1,d,n);
  fun(i,j+1,d,n);
}

int main(){
int t;
cin>>t;
while(t--){

flag=0;
cin>>n;

int si=0;
int sj=0;
int di=0;
int dj=0;
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    cin>>arr[i][j];
    if(arr[i][j]==1){
       si=i;
       sj=j;
    }
    if(arr[i][j]==2){
       di=i;
       dj=j;
    }

    vis[i][j]=0;
  } 
}
//cout<<arr[3][3]<<endl;

fun(si,sj,arr[di][dj],n);

if(flag==1)
  cout<<1<<endl;
else
  cout<<0<<endl;
}//end of while
return 0;
}


