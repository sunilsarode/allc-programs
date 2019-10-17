#include<bits/stdc++.h>
using namespace std;
string getValue(int r);
int main(){
int num,base;
cin>>num>>base;
string s=""; 
while(num){
  
  s=s+getValue(num%base);
  num=num/base;
  
}
for(int i=s.size()-1;i>=0;i--){
   cout<<s[i];
}


return 0;
}

string getValue(int rem){
   
  if(rem>=0&&rem<=9){
     return string (1,(char)rem+'0');
  }else{
     return string(1,(char)rem-10+'A');
  }

}
