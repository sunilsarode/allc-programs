#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[26]={0};
string s;
getline(cin,s);
//cout<<s;
//cout<<arr[6];
for(int i=0;i<s.size();i++){
    if((int)s[i]>=97&&(int)s[i]<=122){
         arr[s[i]-'a']++;
    }else if((int)s[i]>=65 && (int)s[i]<=90){
         arr[s[i]-'A']++;
    }  
}
bool var=true;
for(int i=0;i<26;i++){
   if(arr[i]==0){
     var=false;
     break;
 }
}

if(var){
  cout<<"pangram"<<endl;
}else{
  cout<<"not pangram"<<endl;
}
return 0;
}
