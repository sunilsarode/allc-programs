#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int> st;
st.push(4);
st.push(5);
st.push(3);

while(st.size()){
  cout<<st.top()<<" ";
  st.pop();
}

return 0;
}
