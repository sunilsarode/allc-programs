#include<bits/stdc++.h>
using namespace std;

int main(){

map<string,int> m;
m.insert({"sunil",4});
m["sunil"]=5;
cout<<m["sunil"]<<endl;
m.insert({"sunil",9});
m.insert({"anil",7});
m.insert({"nil",6});

map<string,int>::iterator it; 

for(it=m.begin();it!=m.end();++it){
  cout<<it->first<<" "<<it->second<<endl;
}

if(m.find("anil")!=m.end()){
   cout<<"Found"<<endl;
}else{
   cout<<"Not Found"<<endl;
}

cout<<m.count("sunil")<<endl;
return 0;
}
