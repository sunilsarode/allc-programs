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
int marks; 
for(int i=0;i<n;i++){
  cin>>name>>marks;
  vec.push_back(make_pair(name,marks));
}
sort(vec.begin(),vec.end(),cmp);

vector<pair<string,int>>::iterator it;

for(it=vec.begin();it!=vec.end();it++){
  cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}
