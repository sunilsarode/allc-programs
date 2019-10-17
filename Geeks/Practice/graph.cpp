#include<bits/stdc++.h>
using namespace std;
int main() {
   
    int t;
    cin>>t;
    while(t--){
        int v,e,a,b;
        cin>>v>>e;
        cout<<e<<endl;
        vector<pair<int,int>> vec[v];
        for(int i=0;i<e;i++){
          cin>>a>>b;  
          vec[a].push_back(make_pair(b,0));
          vec[b].push_back(make_pair(a,0));
        }
        for(int i=0;i<v;i++){
           cout<<i;
           for(int j=0;j<vec[i].size();j++){
               cout<<"->"<<vec[i][j].first;
           }
           cout<<endl;
        }
    }
	return 0;
}
/*
8 14
0 3
0 1
1 2
1 4
1 5
1 3
2 6
2 4
4 7
5 6
5 2
5 3
5 7
7 1*/
