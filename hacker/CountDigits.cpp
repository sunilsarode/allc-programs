#include<bits/stdc++.h>

using namespace std;

int main(){
int arr[10]={0};
string s;
cin>>s;
for(int i=0;i<s.size();i++){
  
  arr[(int)s[i]-'0']++;
}
for(int i=0;i<10;i++){
  cout<<i<<" "<<arr[i]<<endl;
}
return 0;
}
