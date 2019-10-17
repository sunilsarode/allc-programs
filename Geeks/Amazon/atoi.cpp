#include<bits/stdc++.h>

using namespace std;
int atoi(string str);
int main(){

int t=0;
cin>>t;

while(t--){
string s;
cin>>s;

cout<<atoi(s)<<endl;
}

return 0;
}
int atoi(string s)
{
 int num=0;
 int minus=1;
 for(int i=0;i<s.length();i++){

   if(s[i]=='-'){
      i=1;
      minus=-1;
   }
   int n=s[i]-'0';

   if(n>=0&&n<=9){
      num=num*10+n;
   }else{
     return -1;
   }
}
return num*minus;

}
