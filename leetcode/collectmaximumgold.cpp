#include<bits/stdc++.h>
using namespace std;

 int dfs(int r,int c,vector<vector<int>>& mat,int i,int j){
        
      
       if(i>=r || j>=c || i<0 || j<0){
           return 0;
       }
       int val=mat[i][j];
       mat[i][j]=0; 
       
       int left=0,right=0,up=0,down=0;
        
       if(i+1<r&&mat[i+1][j]!=0){
          down=dfs(r,c,mat,i+1,j);    
       } 
       if(j+1<c&&mat[i][j+1]!=0){
          right=dfs(r,c,mat,i,j+1);           
       }
       if(i-1>=0&&mat[i-1][j]!=0){
          up=dfs(r,c,mat,i-1,j);    
       }
       if(j-1>=0&&mat[i][j-1]!=0){
          left=dfs(r,c,mat,i,j-1);    
       }
       mat[i][j]=val;
       return  val+max(down,max(right,max(up,left)));
}

int getMaximumGold(vector<vector<int>>& matrix) {

   int r=matrix.size();
    
       if(r==0){
           return 0;
       }
       int c=matrix[0].size();
        
      
        
        int res=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               
                if(matrix[i][j]!=0){
                    res=max(res,dfs(r,c,matrix,i,j));    
                }
                
            }
        }
        
        
         
      return res;
        

}  

int main(){

  int n,m;
  cin>>n>>m;

  vector<vector<int>> v(n,vector<int>(m,0));

  for(int i=0;i<n;i++){
     //vector<int> v1(3,0);
     for(int j=0;j<m;j++){
          cin>>v[i][j];
     }  
 
  }
  
  cout<<getMaximumGold(v)<<endl;

  return 0;
   
}
