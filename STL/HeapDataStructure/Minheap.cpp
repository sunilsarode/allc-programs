#include<bits/stdc++.h>
using namespace std;

int main(){

priority_queue<string,vector<string>,greater<string>> pq;
//cout<<pq.top()<<endl;
pq.push("abc");
pq.push("ab");
pq.push("ABC");

cout<<pq.size()<<endl;
cout<<pq.top()<<endl;

while(pq.size()){
 cout<<pq.top()<<endl;
 pq.pop();
}
cout<<pq.empty()<<endl;

return 0;
}
