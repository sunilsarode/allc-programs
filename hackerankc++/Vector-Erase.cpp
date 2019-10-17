#include<bits/stdc++.h>
using namespace std;

int main(){
int n,val;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
  cin>>val;
  v.push_back(val);
}
int x;
cin>>x;
v.erase(v.begin()+(x-1));
int l,r;

cin>>l>>r;
v.erase(v.begin()+(l-1),v.begin()+(r-1));

cout<<v.size()<<endl;
for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
}
return 0;
}
