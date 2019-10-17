int dis[50];
int vis[50];
typedef pair<int,int>  pr; 
void init(){

for(int i=0;i<max;i++){
  vis[i]=false;
  dis[i]=1e5;
}
}

void dijkstra(vector<vector<int>> graph, int src, int V)
{
    init();

    priority_queue<pr,vector<pr>,greater<pr>> pq;
    dis[src]=0;
    pq.push({0,src});

    while(!pq.empty()){
       pr p=pq.top();
       pq.pop();
       int x=p.second;
       if(vis[x]==1){
          continue;
       }
        vis[x]=true;

       for(int i=0;i<graph[x].size();i++){
              if(i==x){
                  continue;
              }
             int v=i;
             int w=graph[x][i];
             if(dis[v]>dis[x]+w){
                 dis[v]=dis[x]+w;
                 pq.push({dis[v],v});
            }
 
       } 
    }

    for(int i=0;i<V;i++){
        cout<<dis[i]<<" ";
    }
}
