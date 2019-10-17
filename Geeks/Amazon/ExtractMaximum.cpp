#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
  string s;
  cin>>s;
  int j=0;
  int max=0;
  int findnumber=0;
  int jset=0;
  int i=0;
  for(;i<s.length();i++){
    int n=s[i]-'0';
   
      if(n>=0&&n<=9){
          findnumber=1;
          if(!jset){
            j=i;
            jset=1;
          }
        
      }else{
      	 jset=0;
         if(findnumber){
	  findnumber=0;
          //cout<<i<<endl;
          //cout<<s.substr(j,i-j)<<endl;
          int k=stoi(s.substr(j,i));
	  if(k>max){
             max=k;
          }
        }
      }
    
  }
  //cout<<s.substr(j,i-j)<<endl;
          int k=stoi(s.substr(j,i));
	  if(k>max){
             max=k;
          }
  cout<<max<<endl;
}
}
