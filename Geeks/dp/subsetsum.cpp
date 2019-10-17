#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
   int n,sum;
   cin>>n>>sum;
   int warr[n];
   for(int i=0;i<n;i++){
       cin>>warr[i];
   }
   int arr[n+1][sum+1];
   for(int i=1;i<sum+1;i++){
      arr[0][i]=0;
   }
   for(int j=0;j<n+1;j++){
      arr[j][0]=1;
   }
   for(int i=1;i<n+1;i++){
      for(int j=1;j<sum+1;j++){
          if(warr[i-1]>j){
             arr[i][j]=arr[i-1][j];
          }else{
             arr[i][j]=arr[i-1][j]||arr[i-1][j-warr[i-1]];
          }
          
      }
   }

  for(int i=0;i<n+1;i++){
     for(int j=0;j<sum+1;j++){
          cout<<arr[i][j]<<" ";
     }
     cout<<endl;
  }
   
}
return 0;
}
