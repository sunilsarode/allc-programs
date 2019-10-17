#include<bits/stdc++.h>
#include <set>
using namespace std;
int main(){
int t,e,x,y;
cin>>t;
while(t-->0){
set<int> st;
cin>>e;
for(int i=0;i<e;i++){
cin>>x>>y;
st.insert(x);
st.insert(y);
}
cout<<st.size()<<endl;

}
return 0;
}
