#include<bits/stdc++.h>

using namespace std;
int main(){

queue<int> q;
q.push(2);
q.push(4);
q.push(6);

while(q.size()){
  cout<<q.front()<<" ";
  q.pop();
}

q.push(2);
q.push(4);
q.push(6);


while(q.size()){
  cout<<q.back()<<" ";
  q.pop();
}

return 0;
}
