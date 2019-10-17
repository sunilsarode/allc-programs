#include<bits/stdc++.h>
using namespace std;
int value(char c);
int main(){

string s;
cin>>s;

int base;
cin>>base;

int power=1;
int ans=0;

 for(int i=s.size()-1;i>=0;i--){
      int num=value(s[i]);
      //cout<<num<<endl;    
      if(num>=base){
           cout<<"Invalid Input"<<endl;
           break; 
      }

     ans=ans+(power*num);
     power=power*base;      
  }

cout<<ans<<endl;
return 0;
}

int value(char c){
      if(c>='0'&& c<='9'){
            return (int)c-'0';
      }else{
            return (int)c-'A'+10;
      }

}
