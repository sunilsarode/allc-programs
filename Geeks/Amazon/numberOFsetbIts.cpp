#include<bits/stdc++.h>
using namespace std;
char* ptr=NULL;
char * fun(int n){

int cn=n;
string s;
int c=0;
while(n){
  int r=n%2;
  if(r==1){
     c++;
  }
  s+=(r+'0');
  n=n/2;
}
string ns;
for(int i=s.size()-1;i>=0;i--){
     ns+=s[i];
 
}
cout<<ns<<endl;
int msb=0;
for(int i=0;i<ns.size();i++){
     if(ns[i]=='1'){
         msb=i; 
         break;
     }  
}
int lsb=0;
for(int i=ns.size()-1;i>=0;i--){
   if(ns[i]=='1'){
      lsb=i;
      break;
   }
}
cout<<c<<" "<<msb<<" "<<lsb<<endl;
ptr=new char[6];


ptr[0]=c+'0';
ptr[1]='#';
ptr[2]=msb+'0';
ptr[3]='#';
ptr[4]=lsb+'0';
ptr[5]='\0';
return ptr;
}

int main(){
int n;
cin>>n;

char* p=fun(n);
cout<<p<<endl;
return 0;
}
