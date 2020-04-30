#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
string s;
cin>>n>>s;
map<char,int> mp;

for(int i=0;i<n;i++){
   mp[s[i]]++;
}

int one=mp['n'];
int zero=mp['z'];

for(int i=0;i<one;i++){
  cout<<1<<" ";
}
for(int i=0;i<zero;i++){
  cout<<0<<" ";
} 
cout<<"\n";
return 0;
}
