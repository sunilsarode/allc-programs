#include<bits/stdc++.h>
using namespace std;

    vector<pair<int,int>> adj[n+1];
        
        for(int i=0;i<times.size();i++){
            
            vector<int> in=times[i];
            adj[in[0]].push_back(make_pair(in[2],in[1]));
        }
        
        vector<int> vis(n+1,0);
        vector<int> dis(n+1,1e8);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        
        pq.push(make_pair(0,k));
        dis[k]=0;
        //vis[k]=1;
        
        
        while(!pq.empty()){
            
            pair<int,int> t=pq.top();
            pq.pop();
            
            int x=t.second;
            
            if(vis[x]==1){
                continue;
            }
            
            vis[x]=1;
            
            for(int i=0;i<adj[x].size();i++){
                
                int w=adj[x][i].first;
                int v=adj[x][i].second;
                
                if(w+dis[x]<dis[v]){
                      dis[v]=w+dis[x];
                      pq.push(make_pair(dis[v],v));
                }
            }
        }
        
        int mans=INT_MIN;
        
        /*for(int i=1;i<n+1;i++){
            cout<<vis[i]<<" ";
        }
        cout<<endl;*/
        for(int i=1;i<n+1;i++){
           if(vis[i]==1){
               mans=max(mans,dis[i]);            
           }else{
               mans=-1;
               break;
           } 
        }
        
        return mans;
        
    }

int main(){

  vector<vector<int>> v;
  int x,y,w,n;
  cin>>n;
  for(int i=0;i<n;i++){
     vector<int> v1(3);   
     cin>>x>>y>>w;
     v1[0]=x;
     v1[1]=y;
     v1[2]=w;
     v.push_back(v1);   
  }
  
  cout<<networkDelayTime(v,n,2)<<endl;
  
}
