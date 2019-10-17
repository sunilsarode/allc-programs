#include<bits/stdc++.h>
using namespace std;
void call(int &i){
   i++;
   ++i;
}
string getData(){
  int i=20;
  return to_string(i)+"x";
}
int main(){
 int i=0;
 call(i);

 cout<<i<<endl;
 
 string str=getData();
 cout<<str<<endl;
 if(str[2]=='x'){
    cout<<1<<endl;
 }
 
 string str1="-1";
 int j=str1[0]-48;
 cout<<j<<endl;

  string s1 = "-1,2,x,x,x";
  int pos=s1.find(",");
  if(pos!=string::npos){
      cout<<pos<<endl;
      cout<<s1.substr(0,pos)<<endl;
      cout<<s1.substr(pos+1)<<endl;
  } 
  
  
return 0;
}
