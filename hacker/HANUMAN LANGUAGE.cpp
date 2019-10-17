#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
string s;

getline(cin,s);
while(t-->0){
  getline(cin,s);
  //cout<<s.size();
  int k=0;
  int count=0;
  for(int i=s.size()-1;i>=0;i--){
    count++;
    
     if(s[i]==' '){
       //cout<<count<<endl;
       //cout<<i<<endl;
       int j=i+1;
      // cout<<j;
      --count;
       while(count>0){
          cout<<s[j];
          j++;
          --count;
       }
      cout<<' ';
      count=0;
    }
    
 }
  int i=0;
  while(count>0){
          cout<<s[i];
          i++;
          --count;
       }
 cout<<endl;
}

return 0;
}
