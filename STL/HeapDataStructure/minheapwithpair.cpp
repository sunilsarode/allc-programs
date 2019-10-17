#include<bits/stdc++.h>

using namespace std;
typedef pair<int,char> pr;
int main(){

priority_queue<pr,vector<pr>,greater<pr>> pq;

string s="afdgaajf";
map<char,int> mp;

for(int i=0;i<s.length();i++){
   mp[s[i]]++;
}

for(auto &it:mp){
    pq.push(make_pair(it.second,it.first));
}

while(pq.size()){
  cout<<pq.top().first<<" "<<pq.top().second<<endl;
   pq.pop();
}
return 0;
}
