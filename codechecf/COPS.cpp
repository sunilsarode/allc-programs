#include<bits/stdc++.h>
using namespace std;
int main(){

int t=0;
cin>>t;

while(t--){
  int m,x,y;
  cin>>m>>x>>y;
  int arr[102]={0};
  
  for(int c=0;c<m;c++){
       int cv;
       cin>>cv;
       int diff=cv-(x*y);
       int add=cv+(x*y);
       for(int j=cv;j>=diff;j--){
           if(j>0){
               arr[j]=1;
           }else{
              break;  
           }
       }
       for(int j=cv;j<=add;j++){
           if(j<=100){
              arr[j]=1;
           }else{
              break;
           }
       }     
  }
  int safe=0;
  for(int i=1;i<=100;i++){
       if(arr[i]==0){
           ++safe;
       }
  }
  cout<<safe<<endl;
  
}
return 0;
}
