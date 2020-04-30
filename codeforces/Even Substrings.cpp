#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
string s;
cin>>s;

int a=0;

for(int i=0;i<s.size();i++){
  if((s[i]-'0')%2==0){
     a+=(i+1);
  }
}
cout<<a<<"\n";

}
