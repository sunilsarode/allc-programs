#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> adj[numCourses];
        //cout<<prerequisites.size()<<endl;
        for(int i=0;i<prerequisites.size();i++){
            vector<int> in=prerequisites[i];
            
            adj[in[1]].push_back(in[0]);
        }
        

        vector<int> arr(numCourses,0);
        
        for(int i=0;i<numCourses;i++){
           vector<int> in=adj[i];
             for(int j=0;j<in.size();j++){
                 int x=in[j];
                 arr[x]++;
             }
        }
        
        queue<int> q;
        
        for(int i=0;i<numCourses;i++){
            
            if(arr[i]==0){
                q.push(i);
            }
        }

        vector<int> ans;
        
        while(!q.empty()){
             int f=q.front();
             ans.push_back(f);
             q.pop();     
             for(int i=0;i<adj[f].size();i++){
                 int x=adj[f][i];
                 arr[x]--;
                 if(arr[x]==0){
                     q.push(x);
                 }
             }
        }
        
        return ans.size()==numCourses;
        
    }
}; 


int main(){

  vector<vector<int>> v;
  vector<int> v1(2);
  v1[0]=1;
  v1[1]=0;

  v.push_back(v1);
 
  cout<<canFinish(2,v)<<endl;
  
}
