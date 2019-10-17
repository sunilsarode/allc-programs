#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0){
int arr[26]={0};
string s;
string s1;
cin>>s;
cin>>s1;
for(int i=0;i<s.size();i++){
  arr[s[i]-'a']++;
}
for(int i=0;i<s1.size();i++){
 arr[s1[i]-'a']--;
}
bool flag=true;
for(int i=0;i<26;i++){
   if(arr[i]!=0){
      flag=false;
    break;
  } 
}
if(flag){
  cout<<"YES"<<endl;
}else{
  cout<<"NO"<<endl;
}
}
return 0;
}
