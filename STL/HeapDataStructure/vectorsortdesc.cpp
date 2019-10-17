#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v;
int val;
for(int i=0;i<5;i++){
   cin>>val;
   v.push_back(val);
}
sort(v.begin(),v.end(),greater<int>());
for(int i=0;i<5;i++){
   cout<<v[i]<<" ";
}
return 0;
}
