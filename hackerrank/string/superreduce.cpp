#include<bits/stdc++.h>

using namespace std;

int main(){


string s;
cin>>s;
//s.erase(s.begin()+0);
//s.erase(s.begin()+1);
//s.erase(s.begin()+0);
//cout<<s.size();
int i=0;
while(s.size()>0){
   if(i+1<s.size()){
    if(s[i]==s[i+1]){
        s.erase(s.begin()+(i+1));
        s.erase(s.begin()+i);
        i=0;
    }else{
        ++i;
        if(i>=s.size()){
             break;
        }  
    }
   }else{
      break; 
   }
}
if(s.size()>0){
 cout<<s<<endl;
}else{
  cout<<"Empty String"<<endl;
}

return 0;
}
