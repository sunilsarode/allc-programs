#include<bits/stdc++.h>

using namespace std;

int main(){
   map<int,int> mp;
   mp[0]=1;
   mp[1]=2;
   mp[2]=3;
   
   for(auto i:mp){//& is not here
      i.second=0;
   }
   for(auto i:mp){
      cout<<i.second<<"\n";
   }
   
}
