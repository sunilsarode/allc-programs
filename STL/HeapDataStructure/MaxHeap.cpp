#include<bits/stdc++.h>
using namespace std;

int main(){

priority_queue<int> pq;
pq.push(1);
pq.push(0);
pq.push(3);
pq.push(5);

cout<<pq.top()<<endl;

while(pq.size()){
   cout<<pq.top()<<" ";
   pq.pop();
}
cout<<endl;
cout<<pq.empty()<<endl;
return 0;
}
