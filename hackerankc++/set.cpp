#include<bits/stdc++.h>
using namespace std;

int main(){
set<int> st;
int n;
cin>>n;
int x,y;
while(n--){
cin>>x>>y;
set<int>:: iterator it;
if(x==1){
  st.insert(y);
}else if(x==2){
  st.erase(y); 
}else {
  it=st.find(y);
  if(it!=st.end()){
     cout<<"Yes"<<endl;
  }else{
     cout<<"No"<<endl;
  } 
}
}

return 0;
} 
