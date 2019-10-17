#include<bits/stdc++.h>
using namespace std;
int main() {
   
    int t;
    cin>>t;
    while(t--){
        int v,e,a,b;
        cin>>v>>e;
        //cout<<e<<endl;
        vector<pair<int,int>> vec[v];
        for(int i=0;i<e;i++){
          cin>>a>>b;  
          vec[a].push_back(make_pair(b,0));
//          vec[b].push_back(make_pair(a,0));
        }
        int sum=0;
        for(int i=0;i<v;i++){
//           cout<<i;
             sum+=vec[i].size();
//           for(int j=0;j<vec[i].size();j++){
//               cout<<"->"<<vec[i][j].first;
               
           //}
           //cout<<endl;
        }
        cout<<sum<<endl;
    }
	return 0;
}
