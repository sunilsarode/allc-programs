#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool bs(vector<int>& arr,int x){
        
        int l=0;
        int r=arr.size();
        
        while(l<=r){
            int m=l+(r-l)/2;
            
            if(arr[m]==x){
                return true;
            }else if(x>arr[m]){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
         int n=matrix.size();
         
         if(n==0){
             return false;
         }
     
        int m=matrix[0].size();
         
         for(int i=0;i<n;i++){
            vector<int> v=matrix[i];
            /* for(int j=0;j<v.size();j++){
                  cout<<v[j]<<" ";
             }*/
             
             //cout<<bs(v,target)<<endl;
             if(bs(v,target)){
                 return true;
             }
         }
        
        return 0;
    }
};


int main(){
int n,m;
cin>>n>>m;
Solution sol;
vector<vector<int>> arr(n,vector<int>(m,0));
for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     cin>>arr[i][j];
  }
   
}
cout<<sol.searchMatrix(arr,20)<<endl;
return 0;
}

5 5
1 4 7 11 15
2 5 8 12 19
3 6 9 16 22
10 13 14 17 24
18 21 23 26 30
