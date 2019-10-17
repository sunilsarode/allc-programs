#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a, 
               const pair<int,int> &b)
{
       if(a.first==b.first) 
          return a.second<b.second; 
       return (a.first < b.first);
}
int main(){
vector<pair<int,int>> vec;

int n,t,p;
cin>>n;

for(int i=1;i<=n;i++){
  cin>>t>>p;
  vec.push_back(make_pair((t+p),i));
}

sort(vec.begin(),vec.end(),cmp);
for(int i=0;i<n;i++){
  cout<<vec[i].second<<" ";
}
return 0;
}
