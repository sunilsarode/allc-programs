#include<bits/stdc++.h>
using namespace std;
int main(){

int n,va,q;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
  cin>>va;
  v.push_back(va);
}
cin>>q;
int x;
while(q-->0){
  cin>>x;
  vector<int>::iterator itr;
  itr=lower_bound(v.begin(),v.end(),x);
  if(v[itr-v.begin()]==x){
    cout<<"Yes"<<" "<<(itr-v.begin())+1<<endl;
  }else{
    cout<<"No"<<" "<<(itr-v.begin())+1<<endl;
  }
  //cout<<itr -v.begin()<<endl;
  
}
return 0;
} 
