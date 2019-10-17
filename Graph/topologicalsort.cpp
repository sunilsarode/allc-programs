#include<bits/stdc++.h>
using namespace std;
/*
5 6
1 2
1 3
2 3
2 4
3 4
3 5
*/
int main(){

int n,m,x,y;
cin>>n>>m;

vector<pair<int,int>> adj[n+1];


for(int i=0;i<m;i++){
   cin>>x>>y;
   adj[x].push_back(make_pair(0,y));
}

vector<int> arr(n+1,0);

for(int i=1;i<n+1;i++){
    vector<pair<int,int>> in=adj[i];
    for(int j=0;j<in.size();j++){
        int x=in[j].second;
        arr[x]++;
    }
}
for(int i=1;i<arr.size();i++){
   cout<<arr[i]<<" ";
}
cout<<endl;

priority_queue<int,vector<int>,greater<int>> pq;
for(int i=1;i<arr.size();i++){
   if(arr[i]==0){
        pq.push(i);
   }
}
//cout<<pq.size()<<" "<<pq.top()<<endl;
vector<int> ans;

while(!pq.empty()){
   int t=pq.top();
   pq.pop();
   ans.push_back(t);
   vector<pair<int,int>> in=adj[t];
   //cout<<in.size()<<" "<<t<<endl;
    for(int j=0;j<in.size();j++){
        int x=in[j].second;
        //cout<<x<<" "<<t<<endl;
        arr[x]--;
        if(arr[x]==0){
           pq.push(x);
        }
    }
}
//cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++){
   cout<<ans[i]<<" ";
}

cout<<endl;
return 0;
}
