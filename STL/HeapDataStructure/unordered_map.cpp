#include<bits/stdc++.h>
using namespace std;


int main(){

unordered_map<string,int> mp;
mp.insert({"Sunil",4});
mp.insert({"Anil",5});
mp.insert({"Niki",2});
mp.insert({"Nil",2});

unordered_map<string,int>:: iterator it;

for(it=mp.begin();it!=mp.end();it++){
      cout<<it->first<<" "<<it->second<<endl;
}

return 0;
}
