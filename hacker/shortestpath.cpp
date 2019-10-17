#include<bits/stdc++.h>
#include <vector>

using namespace std;
#define SIZE 1000000+ 1
typedef long long ll;
vector < pair < ll,ll> > v [SIZE];   // each vertex has all the connected vertices with the edges weights
ll  dist[SIZE];
bool visited[SIZE];

void init(){
	
for(long long  i=0;i<SIZE;i++){
       dist[i]=1e9;
       visited[i]=false;
   }
}
void dijkstra(){
                                                // set the vertices distances as infinity
                                                // set all vertex as unvisited
    dist[1] = 0;
    multiset < pair <ll , ll > > s;          // multiset do the job as a min-priority queue

    s.insert({0 , 1});                          // insert the source node with distance = 0

    while(!s.empty()){

        pair <ll , ll> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());

        ll x = p.second;
        
        if( visited[x] ) continue;                  // check if the popped vertex is visited before
         visited[x] = true;

        for(unsigned int i = 0; i < v[x].size(); i++){
            ll e = v[x][i].second; 
            ll w = v[x][i].first;
            //cout<<dist[e]<<" ";
            //cout<<e<<" ";
            //cout<<w<<" ";
            if(dist[x] + w < dist[e]){            // check if the next vertex distance could be minimized
              //  cout<<"In"<<endl;
                dist[e] = dist[x] + w;
                s.insert({dist[e],  e} );           // insert the next vertex with the updated distance
            }
        }
    }
}
int main()
{
	init();
    ll nodes, edges, x, y;
    ll weight;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        v[x].push_back(make_pair(weight, y));
      //  v[y].push_back(make_pair(weight, x));
    }
  //call dijkstra
  dijkstra();
      
 /** vector <pair<ll,ll>> :: iterator it;
 
  for(int i=0;i<5;i++){
    for(it=v[i].begin(); it!=v[i].end();it++) {
		cout << it->first << " " << it->second << ",";
	}
    cout << "\n";
 }**/
 
    
    for(int i=2;i<=nodes;i++){
		cout<<dist[i]<<" ";
	}

    return 0;
}

