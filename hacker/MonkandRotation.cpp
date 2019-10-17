#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0){
int n,k,val;
cin>>n>>k;
list<int> l;
for(int i=0;i<n;i++){
  cin>>val;
  l.push_back(val);
}
while(k-->0){
  int ele=l.back();
  l.pop_back();
  l.push_front(ele);
}
while(!l.empty()){
  cout<<l.front()<<" ";
  l.pop_front();
}
cout<<endl;
}
return 0;
}
