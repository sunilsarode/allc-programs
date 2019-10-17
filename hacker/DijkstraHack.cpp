#include<bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <iterator>
using namespace std;
#define SIZE 10000+9
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
void dijkstra(int index,int endIndex){
                                                // set the vertices distances as infinity
                                                // set all vertex as unvisited
    dist[index] = 0;
    multiset < pair <ll , ll > > s;          // multiset do the job as a min-priority queue

    s.insert({0 , index});                          // insert the source node with distance = 0

    while(!s.empty()){

        pair <ll , ll> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());
        if(endIndex==p.second){
			break;
		}
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
	// added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	int t=0;
	cin>>t;
	while(t-->0){
		
		int n=0;
		cin>>n;
		map <string, int> citymap;   
		string  str;
		for(int i=1;i<=n;i++){
			
			cin>>str;
			citymap.insert(pair<string,int>(str,i));
			int p=0;
			cin>>p;
			ll weight,y;
		      for(int j=0;j<p;j++){
			    cin>>y;
			    cin>>weight;
			    v[i].push_back(make_pair(weight, y));
		     }
		}
		
		int path=0;
		cin>>path;
		string start;
		string end;
		map <string,int> :: iterator itr;
		map <string,int> :: iterator itr1;
		for(int i=0;i<path;i++){
			init();
			cin>>start;
			cin>>end;
			itr=citymap.find(start);
			itr1=citymap.find(end);
			dijkstra(itr->second,itr1->second);
			
			/**for(int i=1;i<=n;i++){
				cout<<dist[i]<<" ";
			}**/
			
			
			cout<<dist[itr1->second]<<endl;
			
		}
		
       

		
	}
   
    return 0;
}
