#include<bits/stdc++.h>
using namespace std;


struct Data{
  int f;
  char c;
};
struct cmp{
   bool operator()(Data d1,Data d2){
      return d1.f>d2.f;
  } 
};
int main(){
priority_queue<Data,vector<Data>,cmp> pq;
string s="afdxxaajf";
map<char,int> mp;
for(int i=0;i<s.length();i++){
   mp[s[i]]++;
}
for(auto it:mp){
   Data d;
   d.f=it.second;
   d.c=it.first;
   pq.push(d); 
}
while(pq.size()){
   cout<<pq.top().c<<" "<<pq.top().f<<endl;
   pq.pop();
}  
return 0;
}
