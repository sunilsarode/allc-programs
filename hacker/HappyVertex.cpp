#include<bits/stdc++.h>
using namespace std;
const int MAX=100001; 

vector<int> vec[MAX];
bool mark[MAX];
int parent[MAX]={0};
void dfs(int min);

int main(){
int count=0;
int n,m,x,y;
cin>>n>>m;
for(int i=0;i<m;i++){
   cin>>x>>y;
   vec[x].push_back(y);
   vec[y].push_back(x);
  
   
}

for(int i=1;i<=n;i++){
   if(mark[i]==false){
       
      parent[i]=0;
      dfs(i);
   }
}
for (int i = 1; i <= n; i++) {
	if (parent[i] != 0) {
		if (parent[parent[i]] == 0) {
			/**
			 * very imp step here you were having doubt while imagining adjacency list to
			 * get parent.draw the graph you will get it
			 **/
			if (vec[i].size() - 1 > vec[parent[i]].size()) {
					count++;
		            }
			
		} else {
		  	if (vec[i].size() > vec[parent[i]].size()) {
					count++;

			}
		}
	}
}
cout<<count<<endl;
return 0;
}

void dfs(int min){
 
  mark[min]=true;
  for(int i=0;i<vec[min].size();i++){
     if(mark[vec[min][i]]==false){
           parent[vec[min][i]]=min;
           dfs(vec[min][i]);
   }
  }

}
