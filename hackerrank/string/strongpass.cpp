#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;

  int count=0;
  for(int i=0;i<n;i++){
      if((s[i]-'0')>=0&&(s[i]-'0')<=9){
            
             count++;
              break;
       }
  }

  
  for(int i=0;i<n;i++){
      if(s[i]>=97&&s[i]<=122){
             count++;
              break;
       }
  } 
 
 
  for(int i=0;i<n;i++){
      if(s[i]>=65&&s[i]<=90){
             count++;
              break;
       }
  }
 
 
 
  for(int i=0;i<n;i++){
         //!@#$%^&*()-+
      if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||s[i]=='+'){
             count++;
              break;
       }
  }
  
  cout<<count<<endl;
 
  if(n>=6){   
     cout<<4-count<<endl;
    }
    else{
        cout<<max(6-n, 4-count)<<endl;
    }
  

return 0;
}
