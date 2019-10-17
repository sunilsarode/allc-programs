#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0)
{
string s;
int n,m;
cin>>s>>n>>m;
int arr[26]={0};
//sort(s.begin()+n,s.begin()+m+1,greater<int>());

for(int i=n;i<=m;i++){
  arr[s[i]-'a']++;
}
for(int i=0;i<n;i++){
cout<<s[i];
}
for(int i=25;i>=0;i--){
  while(arr[i]>0){
     cout<<(char)(i+'a');
    --arr[i];
 }
//cout<<arr[i];
}
for(int i=m+1;i<s.length();i++){
 cout<<s[i];
}
cout<<endl;


}
return 0;
}
