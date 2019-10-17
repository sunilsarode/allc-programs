#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int t;
cin>>t;
while(t-->0){
int n;
cin>>n;
set<string> st;
string s;
for(int i=0;i<n;i++){
cin>>s;

st.insert(s); 
}
set<string>::iterator it;
for(it=st.begin();it!=st.end();it++){
  cout<<*it<<endl;
}
}
return 0;
}
