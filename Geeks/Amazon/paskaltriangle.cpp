#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> pascal(int n){
  
   vector<vector<int>> v(n+1);

   for(int i=0;i<n;i++){
       vector<int> inv(i+1);
       v[i]=inv;
       for(int j=0;j<=i;j++){
           if(i==j||j==0){
                 v[i][j]=1;
            }else{
                 v[i][j]=v[i-1][j-1]+v[i-1][j];
           }
      }
      
   }
  return v;
}

int main(){

  int n;
  cin>>n;
 
  vector<vector<int>> v=pascal(n);

  for(int i=0;i<n;i++){
     for(int j=0;j<=i;j++){
         cout<<v[i][j]<<" ";
     }
   cout<<endl;
  }
  return 0;
}
