#include<bits/stdc++.h>
using namespace std;

int main(){
  
  string name="sunil love niki";
  
  int pos=name.find("loee");
  cout<<pos<<endl;
  if(pos==string::npos){
      cout<<"yes npos mean -1"<<endl;
  }
  
  //stoi string to integer
  string str="1033";
  int val=stoi(str);
  cout<<val+1<<endl;
  
  //integer to string

  int value=132;
  string s=to_string(value);
  cout<<s+"a"<<endl;

  //get the number value from each char
 
  int sum=0;
  for(int i=0;i<str.size();i++){
  
       sum=sum+str[i]-'0';//to change char to integer 
  }
  cout<<sum<<endl;

  //substring

  string test="niki";
  test=test.substr(0);  
  cout<<test<<endl;

  //sort the string
  sort(test.begin(),test.end());
  cout<<test<<endl;

 //string compare
 string one="abc";
 string two="def";

 cout<<two.compare(one)<<endl;

 string n;
 if(n.size()==0){
    cout<<"Sunil null can not assign to std string"<<endl;
 }

return 0;
}
