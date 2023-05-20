#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int palindrome(string &s){
   
   string c=s;
   reverse(c.begin(),c.end());
   
   if(s==c){
       return 1;
   }
   
   return 0; 
}

int main(){


  string s="000";
  s.at(1);	  
  cout<<s<<"\n";
  
  return 0;
}

