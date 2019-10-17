#include<bits/stdc++.h>

using namespace std;
int main(){

set<int,greater<int>> st;

st.insert(2);
st.insert(1);
st.insert(1);
st.insert(5);
cout<<st.size()<<endl;

set<int> ::iterator it;

for(it=st.begin();it!=st.end();++it){
   cout<<*it<<endl;
}
cout<<endl;
for(auto i:st){
    if(i==5){
        st.erase(i);
    }
}
for(auto i:st){
    cout<<i<<endl;
}
return 0;
}
