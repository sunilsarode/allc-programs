#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>& p1,pair<string,int>& p2){
   if(p1.second==p2.second){
       return p1.first<p2.first;
   }
  return p1.second>p2.second;
}

int main(){

int n;
cin>>n;
vector<pair<string,int>> vec;
string name;
int m; 
for(int i=0;i<n;i++){
  cin>>name>>m;
  vec.push_back(make_pair(name,m));
}
sort(vec.begin(),vec.end(),cmp);


return 0;
}
