#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t-->0){
int n,m;
string s;
cin>>n>>m;

int arr[n][26];
for(int i=0;i<n;i++){
  
  for(int j=0;j<26;j++){
      arr[i][j]=0;
 }
}
string sin;
for(int i=0;i<n;i++){
   cin>>sin;
  for(int j=0;j<m;j++){
      arr[i][(int)sin[j]-'a']++;
 }
}

/**for(int i=0;i<n;i++){
  
  for(int j=0;j<26;j++){
      cout<<arr[i][j]<<"";
 }
  cout<<endl;
}*/

cin>>s;
int x;
bool flag=true;
for(int i=0;i<s.size();i++){
   x=i%n;
   int index=((int)s[i])-'a';
   // cout<<index<<endl;
   // cout<<arr[x][index]<<endl;
   if(arr[x][index]>0){
      arr[x][index]--;

   }else{
      flag=false;
        break;
   }
  
}
if(flag){
  cout<<"Yes"<<endl;
}else{
  cout<<"No"<<endl;
}
}
return 0;
}
