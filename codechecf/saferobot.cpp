#include<bits/stdc++.h>

using namespace std;

int fun(string s,int i,int j,int n,int m){
 
  for(int k=0;k<s.size();k++){
     if(s[k]=='L'){
         j=j-1;
         if(j<0){
             return false;
         }
     }else if(s[k]=='R'){
         j=j+1;
         if(j>=m){
             return false;
         }
     }else if(s[k]=='U'){
         i=i-1;
         if(i<0){
             return false;
         }
     }else if(s[k]=='D'){
        i=i+1;
        if(i>=n){
            return false;
        }
     } 
  }

   return true;
}

int main(){

  int t;
  cin>>t;
  while(t--){
     int n,m;
     cin>>n>>m;
     string s;
     cin>>s;
     int f=0;
     
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(fun(s,i,j,n,m)){
                  f=1;
                  i=n+1;
                  break;
             }
        }
     }

     if(f==0){
         cout<<"unsafe"<<endl;
     }else{ 
         cout<<"safe"<<endl;
     }     
  }
  
  return 0;
}
