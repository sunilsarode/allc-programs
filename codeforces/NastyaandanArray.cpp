#include<bits/stdc++.h>
using namespace std;
int main(){

   int n;
   cin>>n;
   vector<int> arr(n);
   int x;
   unordered_map<int,int> mp;
   for(int i=0;i<n;i++){
     cin>>x;
     if(x!=0){
       mp[x]++; 
     }
   }
   cout<<mp.size()<<"\n";
}
