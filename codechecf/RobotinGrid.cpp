#include<bits/stdc++.h>


using namespace std;

typedef long long int ll;

#define MOD 1000000007
       

ll ans(vector<vector<ll>>& v,int m,int n){
 
   v[0][0]=1;
   for(int i=1;i<n;i++){
     v[0][i]=(v[0][i]==1)?0:v[0][i-1];
   }
   for(int i=1;i<m;i++){
     v[i][0]=(v[i][0]==1)?0:v[i-1][0];
   }
	
   for(int i=1;i<m;i++){
       for(int j=1;j<n;j++){
         if(v[i][j]==1){
             v[i][j]=0;
         }else{
             v[i][j]=(v[i-1][j]+v[i][j-1])%MOD;
          }
     }
   }
 
   return v[m-1][n-1];
}
int main(){

 int m,n,p;//m is row,n is col

 cin>>m>>n>>p;
   
 vector<vector<ll>> v(m,vector<ll>(n,0ll));

 ll ox,oy;
 for(int i=0;i<p;i++){
    cin>>ox>>oy;
    --ox;
    --oy;
    v[ox][oy]=1;
 }

 if(v[0][0]==1){
     cout<<0ll<<endl;
 }else{
    
   cout<<ans(v,m,n)<<endl;
 }


  /*for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cout<<v[i][j]<<" ";
   }

   cout<<endl;
 }*/

 return 0;

}
