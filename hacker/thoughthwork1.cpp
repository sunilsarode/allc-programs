#include<bits/stdc++.h>

using namespace std;

bool cmp(string s1,string s2){
    if(s1.size()==s2.size()){
         if(s1.compare(s2)>0){
             return false;
         }else if(s1.compare(s2)<0){
             return true;
         }else{
             return true;
         }
    }
     return s1.size()<s2.size();
}



void dfs(vector<vector<char>>& arr,vector<vector<int>>& vis,int i,int j,int di,int dj,int n,int m,string& s,
vector<string>& ans){

 if(i==di&&j==dj){
    ans.push_back(s);
    //cout<<ans.size()<<endl;
    return;
 }
 vis[i][j]=1;

 if(i+1<n&&vis[i+1][j]==0&&arr[i+1][j]!='#'){
    s+="D";
    dfs(arr,vis,i+1,j,di,dj,n,m,s,ans);
    s.pop_back();
 }

 if(i-1>=0&&vis[i-1][j]==0&&arr[i-1][j]!='#'){
    s+="U";
    dfs(arr,vis,i-1,j,di,dj,n,m,s,ans);
    s.pop_back();
 }

 if(j+1<m&&vis[i][j+1]==0&&arr[i][j+1]!='#'){
    s+="R";
    dfs(arr,vis,i,j+1,di,dj,n,m,s,ans);
    s.pop_back();
 }     
  
 if(j-1>=0&&vis[i][j-1]==0&&arr[i][j-1]!='#'){
   s+="L";
   dfs(arr,vis,i,j-1,di,dj,n,m,s,ans);
   s.pop_back();
 } 
 
 vis[i][j]=0;
 

}

int main(){

 int n,m;
 cin>>n>>m;

 vector<vector<char>> arr(n,vector<char>(m));



 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     cin>>arr[i][j];
  }
 }


 int qr;
 cin>>qr;
 int sx,sy,ex,ey;
 while(qr--){
  
   vector<vector<int>> vis(n,vector<int>(m,0));
   cin>>sx>>sy>>ex>>ey;
   --sx;
   --sy;
   --ex;
   --ey;
   //cout<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<endl;

   string s;
   vector<string> ans;
   dfs(arr,vis,sx,sy,ex,ey,n,m,s,ans);

   sort(ans.begin(),ans.end(),cmp);
   
   /*for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
   } */
  
   if(ans.size()==0){
       cout<<"Impossible"<<endl;
   }else{
       cout<<ans[0]<<endl;
   }

   
 }
 

return 0;
}
/*
5 5
.....
..#..
.....
#.##.
.#...
3
1 3 3 4
1 1 5 5
1 1 1 5
*/
