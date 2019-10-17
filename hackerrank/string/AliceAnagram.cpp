#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
cin>>s1;
cin>>s2;
int arr[26];
for(int i=0;i<26;i++){
  arr[i]=0;
}
for(int i=0;i<s1.size();i++){
  arr[s1[i]-'a']++;
}

for(int i=0;i<s2.size();i++){
  arr[s2[i]-'a']--;
}
int sum=0;
for(int i=0;i<26;i++){
  sum+=abs(arr[i]);
}
cout<<sum<<endl;
return 0;
}
