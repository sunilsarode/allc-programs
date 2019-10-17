#include<bits/stdc++.h>
using namespace std;
int main(){
string s="1 will #win #US";
if((s[0]-'0')>=0&&(s[0]-'0')<=9){
  cout<<s[0]<<endl;
}

s[0]=s[0]+4;
cout<<s<<endl;


cout<<s.substr(7,4)<<endl;
cout<<s.substr(12,14)<<endl;
//#win #love
s.erase(s.begin(),s.begin()+2);
cout<<s<<endl;

//string s2="a";
//s2.erase(s2.begin()+0);
//cout<<s2.size()<<endl;

if(s.find("will")!=string::npos){
    cout<<s.find("will");
}


return 0;
}
