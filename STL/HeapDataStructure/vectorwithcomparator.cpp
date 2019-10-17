#include<bits/stdc++.h>
using namespace std;


 
bool cmp(pair<char,int> p1,pair<char,int> p2){
       return p1.second>p2.second;
}


int main(){

vector<pair<char,int>> v;
char c;
int f;
int n;
cin>>n;
for(int i=0;i<n;i++){
   cin>>c>>f;
   v.push_back(make_pair(c,f));
}
cout<<endl;
sort(v.begin(),v.end(),cmp);

for(int i=0;i<n;i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}


return 0;
}
