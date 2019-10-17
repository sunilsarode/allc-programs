#include<bits/stdc++.h>
using namespace std;

struct data {
int val,f,s;
};

int main(){
int t;
cin>>t;

while(t-->0){

 struct data arr[26];

 for(int i=0;i<26;i++){
   arr[i].val=0;
   arr[i].f=0;
   arr[i].s=0;
 }
 string s;
 string s1;
 cin>>s>>s1;

 for(int i=0;i<s.length();i++){
  int index=s[i]-'a';
  if(!arr[index].f){
    ++arr[index].val;
    ++arr[index].f;
  }
 }

 for(int i=0;i<s1.length();i++){
   int index=s1[i]-'a';
  if(!arr[index].s){
    ++arr[index].val;
    ++arr[index].s;
  } 
 }

  for(int i=0;i<26;i++){
   if(arr[i].val==1){
     cout<<(char)(i+'a');
   }
 }
 cout<<endl;
}

return 0;
}
