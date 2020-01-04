#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cout<<"enter number of values"<<endl;
cin>>n;

vector<int> arr(n);
cout<<"Enter values to insert in vector"<<endl;
for(int i=0;i<n;i++){
   cin>>arr[i];
}
cout<<"Printing all values"<<endl;
for(auto var:arr){
   cout<<var<<" ";
}
cout<<"\n";
int val;
cout<<"Enter (Duplicate )value to remove  "<<endl;
cin>>val;


unordered_map<int,int> mp;
for(auto var:arr){
   mp[var]++;
}

if(mp[val]>1){
  vector<int>::iterator it;
  it=arr.begin();
  while(it!=arr.end()){
    if(*it==val){
         arr.erase(it);
    }else{
       it++;
    }
  }

  cout<<"vector after deletion "<<endl;
  for(auto var:arr){
    cout<<var<<" ";
  }
}else{

  cout<<val<< " is not duplicate in vector"<<endl;
}



return 0;
}
