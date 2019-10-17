#include<bits/stdc++.h>
using namespace std;
//3245
//121
int solve(int n){

  vector<int> v;

  while(n){
     v.insert(v.begin(),n%10);
     n=n/10;
  }
  
 /*for(auto var:v){
   cout<<var<<" ";
 }
 cout<<endl;*/

 unordered_map<long long int,int> mp; 
 for(int i=0;i<v.size();i++){
     long long int val=1;   
    for(int j=i;j<v.size();j++){
        val=val*v[j];
        if(mp[val]!=0){
             return 0;
        }
        mp[val]++;
   }
 }

  return 1;
}
int main(){

 int n;
 cin>>n;
 cout<<solve(n)<<endl; 
return 0;
}
