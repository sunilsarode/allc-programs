#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<string,int> &a,const pair<string,int> &b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}
int main(){
vector<pair<string,int>> vec;
map<string,int> mp;
int n;
cin>>n;
int i=0;
string s;
getline(cin,s);
while(n-->0){
 getline(cin,s);
 
  for(int i=0;i<s.size();i++){
      if(s[i]=='#'){
         int index=i;
        // cout<<index<<endl;
         while(++i<s.size() && s[i]!=' ');
         string str=s.substr(index,i-index);
         mp[str]++; 
      }
  }
}
map<string,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++){
  // cout<<it->first<<" "<<it->second<<endl;
   vec.push_back(make_pair(it->first,it->second));
}
sort(vec.begin(),vec.end(),cmp);

for(int i=0;i<5;i++){
  cout<<vec[i].first<<endl;
}
return 0;
}
