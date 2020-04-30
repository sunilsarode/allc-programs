#include<bits/stdc++.h>
using namespace std;

int main(){
   string s,s1;
   cin>>s;
   cin>>s1;
   for(auto &i:s){
      if(i>='A'&& i<='Z'){
         i=((i-'A')+'a');
      }
   }
   //cout<<s<<"\n";
   for(auto &i:s1){
      if(i>='A'&& i<='Z'){
         i=((i-'A')+'a');
      }
   }
   //cout<<s1<<"\n";
   int t=s.compare(s1);
   //cout<<t<<"\n";
   if(t==0){
      cout<<0<<"\n";
   }else if(t<0){
      cout<<-1<<"\n";
   }else{
      cout<<1<<"\n";
   }
}
