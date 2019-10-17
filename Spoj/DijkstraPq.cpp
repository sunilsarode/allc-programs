#include<bits/stdc++.h>
#include <vector>
#include <string>
#include <iterator>
#include <map>

typedef long long ll;
using namespace std;
void dijkstra(int startIn,int end,ll disance[],vector<pair<int,ll>>* list);
struct cmp
{
    bool operator()(const pair<int , int> &a , const pair<int , int> &b){
        return a.first > b.first;
    }
};
int main(){
int t=0;
cin>>t;
while(t-->0){
int n;
cin>>n;
vector<pair<int,ll>> list[n+1];
map<string,int> citymap;
string str;
for(int i=1;i<=n;i++){
cin>>str;
citymap.insert(pair<string,int>(str,i));

int p;
cin>>p;
int y;
ll weight;
for(int j=0;j<p;j++){
cin>>y;
cin>>weight;
list[i].push_back(make_pair(y,weight));
}

}
/**for(int j=1;j<=n;j++)
for( int i=0;i<list[j].size();i++){
	   int y=list[j][i].first;
	ll weight=list[j][i].second;
	cout<<j<<" "<<y<<" "<<weight<<endl;
	}*/
int path;
cin>>path;
string start;
string end;
map<string,int> ::iterator itr;
map<string,int> ::iterator itr1;
for(int j=0;j<path;j++){
cin>>start;
cin>>end;
itr=citymap.find(start);
itr1=citymap.find(end);
int startIn=itr->second;
int endIn=itr1->second;
ll distance[n+1];
for(int k=0;k<n+1;k++){
	distance[k]=1e9;
}
dijkstra(startIn,endIn,distance,list);
/**for(int k=0;k<n+1;k++){
    cout<<distance[k]<<" ";
}**/
cout<<distance[endIn]<<endl;
}
}
return 0;
}
void dijkstra(int startIn,int endIn,ll distance[],vector<pair<int,ll>>* list){
 
priority_queue<pair<int,ll>, vector<pair<int,ll>>,cmp> Q;

distance[startIn]=0;
Q.push(make_pair(startIn,0));

while(!Q.empty()){
pair<int,ll> pa=Q.top();
Q.pop();

int x=pa.first;
if(x==endIn){
	break;
}

//cout<<x<<""<<endl;
for(unsigned int i=0;i<list[x].size();i++){
	int y=list[x][i].first;
	ll weight=list[x][i].second;
	//cout<<y <<" "<<weight<<endl;
	if(distance[y]>(weight+distance[x])){
		distance[y]=weight+distance[x];
		Q.push(make_pair(y,distance[y]));
	}
}
}
}
