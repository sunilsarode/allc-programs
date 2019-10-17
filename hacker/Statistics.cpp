#include<bits/stdc++.h>
using namespace std;

int main(){
map<string,set<string>> mp;
int n;
string name,game;
cin>>n;
set<string>::iterator it1;
map<string,set<string>>::iterator it2;
for(int i=0;i<n;i++){
 cin>>name>>game;
it2=mp.find(game);
if(it2!=mp.end()){
    
    set<string> s=it2->second;
    s.insert(name);
    mp[game]=s;
}else{
    set<string> in;
    in.insert(name);
    mp[game]=in;
  }
}
map<string,set<string>>:: iterator it;
int max=0;
string maxg;
for(it=mp.begin();it!=mp.end();it++){
  
    if(it->second.size()>max){
      max=it->second.size();
      maxg=it->first;
  }
}
cout<<maxg<<endl;
cout<<mp["football"].size()<<endl;
return 0;
}
