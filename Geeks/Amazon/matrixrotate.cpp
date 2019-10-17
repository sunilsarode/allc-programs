#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int arr[100][100];
while(t-->0){
 int m,n,k;
 cin>>m>>n>>k;
 
 
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
   }
 } 

 /*for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
   }
   cout<<endl;
 }*/ 

for(int r=0;r<k;r++){
 for(int i=0;i<m;i++){
   int temp=arr[i][0];
    for(int j=1;j<n;j++){

     arr[i][j-1]=arr[i][j];
   }
   arr[i][n-1]=temp;
 }
}
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
   }
 }

 cout<<endl;
}

return 0;
}


