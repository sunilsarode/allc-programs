#include<bits/stdc++.h>

using namespace std;

bool canCross(vector<int>& stones) {

int n=stones.size();
unordered_map<int,set<int>> mp;
set<int> st;

mp[0]=st;
mp[0].insert(1);

for(int i=1;i<n;i++){
   set<int> st1;
   mp[stones[i]]=st1;
}

for(int i=0;i<n-1;i++){
   int stone=stones[i];
   for(auto step:mp[stone]){
        
        int reach=step+stone;
      //   if we have reached at the end return true from here 
        if(reach==stones[n-1]){
              return true;
        }
      //   we are using set as key ,cause below code can add duplicate possible jumps for a reach  ,set will avoid that 
        if(mp.find(reach)!=mp.end()){
            mp[reach].insert(step);
            if(step-1>0){
               mp[reach].insert(step);
            }
            mp[reach].insert(step+1);
        }
   }
}

return false;
}

int main(){
vector<int> arr={0,1,3,5,6,8,12,17};//[0,1,2,3,4,8,9,11]
cout<<canCross(arr)<<"\n";
return 0;
}

