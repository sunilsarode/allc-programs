#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
   for(int i=0;i<9;i++){
       string s;
       cin>>s;
       for(auto &st:s){
          if(st=='1'){
              st='9';
          }
       }
       cout<<s<<"\n";
   }
   
}
return 0;
}
