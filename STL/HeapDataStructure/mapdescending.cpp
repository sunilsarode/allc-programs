#include<bits/stdc++.h>
using namespace std;

int main(){

map<string,int,greater<string>> mp;
mp.insert({"Sunil",4});
mp.insert({"Anil",5});
mp.insert({"Niki",10});

map<string,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++){
     cout<<it->first<<" "<<it->second<<endl;
}


return 0;
}
