#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
cin>>t;

while(t-->0){
int arr[26];
for(int i=0;i<26;i++){
  arr[i]=0;
}
string s;
cin>>s;

if(s.size()%2==0){
   
string s1=s.substr(0,s.size()/2);
string s2=s.substr(s.size()/2,s.size()/2);
for(int i=0;i<s1.size();i++){
   arr[s1[i]-'a']++;
}
int sum=0;
for(int i=0;i<s2.size();i++){
    if(arr[s2[i]-'a']--<=0){
        sum++;
    }
}
cout<<sum<<endl;
}else{
  cout<<"-1"<<endl;
}
}

return 0;
}

