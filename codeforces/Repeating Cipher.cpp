#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
string s;
cin>>s;
int i=1;
int j=0;
string a;
while(j<t){
  j=j+i-1;
  a+=s[j];
  j++;
  i++; 
}
cout<<a<<"\n";
}
