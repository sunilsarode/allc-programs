#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    void dfs(vector<vector<int>>& arr,vector<vector<int>>& vis,int i,int j,int ei,int ej,int n,int m,vector<string>& ans,string& str,int pc){
        
        
        if(i==ei&&j==ej){
             cout<<str.size()<<endl;
             cout<<str<<endl;
            if(str.size()-1==pc){
               
                ans.push_back(str);
            }
        }
        
        vis[i][j]=1;
            
        if(i+1<n&&vis[i+1][j]==0&&arr[i+1][j]!=-1){
            str+=to_string(arr[i+1][j]);
            dfs(arr,vis,i+1,j,ei,ej,n,m,ans,str,pc);
            str.pop_back();
        }
        
        if(i-1>=0&&vis[i-1][j]==0&&arr[i-1][j]!=-1){
            str+=to_string(arr[i-1][j]);
            dfs(arr,vis,i-1,j,ei,ej,n,m,ans,str,pc);
            str.pop_back();
        }
        
        if(j+1<m&&vis[i][j+1]==0&&arr[i][j+1]!=-1){
            str+=to_string(arr[i][j+1]);
            dfs(arr,vis,i,j+1,ei,ej,n,m,ans,str,pc);
            str.pop_back();
        }
        
        if(j-1>=0&&vis[i][j-1]==0&&arr[i][j-1]!=-1){
            str+=to_string(arr[i][j-1]);
            dfs(arr,vis,i,j-1,ei,ej,n,m,ans,str,pc);
            str.pop_back();
        }
        
        vis[i][j]=0;
        
        
        
        
    }
    
     
    int uniquePathsIII(vector<vector<int>>& grid) {
     
        
        int n=grid.size();
        if(n==0){
            return 0;
        }
        int m=grid[0].size();
        
        int pc=0;
        int si=0;
        int sj=0;
        int ei=3;
        int ej=3;
        
        cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0||grid[i][j]==2){
                    pc++;
                }
               /* if(grid[i][j]==1){
                    si=i;
                    sj=j;
                }
                if(grid[i][j]==2){
                    ei=i;
                    ej=j;
                }*/
            }
        }
        cout<<pc<<endl;
        //cout<<si<<" "<<sj<<" "<<ei<<" "<<ej<<endl;
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<string> ans;
        string str;
        dfs(grid,vis,si,sj,ei,ej,n,m,ans,str,pc);
        
        return ans.size();
    }
};

int main(){

Solution s;


vector<vector<int>> arr(4,vector<int>(4,0));

vector<int> v1(4,0);
v1[0]=0;
v1[1]=2;
v1[2]=-1;
v1[3]=2;
arr[0]=v1;

vector<int> v2(4,0);

v2[0]=2;
v2[1]=0;
v2[2]=2;
v2[3]=2;

arr[1]=v2;

vector<int> v3(4,0);
v3[0]=0;
v3[1]=2;
v3[2]=-1;
v3[3]=-1;
arr[2]=v3;

vector<int> v4(4,0);
v4[0]=0;
v4[1]=0;
v4[2]=2;
v4[3]=2;

arr[3]=v4;


s.uniquePathsIII(arr);
return 0;
}
