#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t-->0){

int n,m,q,x,y,op;
cin>>n>>m;
int arr[n][m];

for(int i=0;i<n;i++){
  for(int j=0;i<n;i++){
     cin>>arr[i][j];
 }
}
cin>>q;
int ans=0;
for(int i=0;i<n;i++){
   cin>>op>>x>>y;
   if(op==1){
      if(x-1>=0&&y-1>=0){
        ans+=arr[x-1][y-1];
      }
      if(x-1>=0){
        ans+=arr[x-1][y];
      }
      if(x-1>=0&&y+1<m){
        ans+=arr[x-1][y+1];
      }
      if(y+1<m){
         ans+=arr[x][y+1]; 
      }
      if(x+1<n&&y+1<m){
        ans+=arr[x+1][y+1];
      }
      if(x+1<n){
         ans+=arr[x+1][y];
      }
      if(x+1<n&&y-1>=0){
         ans+=arr[x+1][y-1];
      }	
      if(y-1>=0){
	 ans+=arr[x][y-1];
      }
     cout<<ans<<endl;

   }else{

   }   
 }
}

return 0;
}
