#include<bits/stdc++.h>
using namespace std;
vector<int> dNums(vector<int> &A, int B){

   vector<int> res;
   int n=A.size();
   
   if(B>n){
      return res;
   }
   unordered_map<int,int> mp;
   
   for(int i=0;i<B;i++){
       mp[A[i]]++;   
   }
   res.push_back(mp.size());
   for(int i=B;i<n;i++){
       mp[A[i]]++;
    
       mp[A[i-B]]--;
       
       if(mp[A[i-B]]==0){
           mp.erase(A[i-B]);
       }
       res.push_back(mp.size());
   }

   return res;
}

int main(){

  int n,k;
  
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
     cin>>v[i];
  } 

  vector<int> res=dNums(v,k);

  for(auto var:res){
     cout<<var<<" ";
  }

  cout<<endl;
}
