#include<bits/stdc++.h>

using namespace std;

int main(){

list<int> l;
l.clear();
cout<<l.empty()<<endl;
l.push_back(5);
l.push_back(2);
l.push_back(3);
cout<<l.size()<<endl;

for(auto i:l){
   cout<<i<<" ";
}
cout<<endl;
list<int> ::iterator it;
for(it=l.begin();it!=l.end();++it){
   cout<<*it<<" ";
}
cout<<endl;
l.sort();
list<int> :: iterator it1;
for(it1=l.begin();it1!=l.end();++it1){
  cout<<*it1<<" ";
}
cout<<endl;
l.pop_back();
for(auto i:l){
  cout<<i<<" ";
}
cout<<endl;
return 0;
}

//in case of vector we dont have push front and pop front
