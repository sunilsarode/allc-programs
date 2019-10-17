#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
int n1,n2;
getline(cin,str);
cin>>n1>>n2;
int val=(int)str[n1-1];

if(val>=97&&val<=122)
str[n1-1]=str[n1-1]-32;
else{

int val2=(int)str[n1-1];
if(val2>=65&&val2<=90)
str[n1-1]=str[n1-1]+32;

}

int val1=(int)str[n2-1];
if(val1>=97&&val1<=122)
str[n2-1]=str[n2-1]-32;
else{
int val3=(int)str[n2-1];
if(val3>=65&&val3<=90)
str[n2-1]=str[n2-1]+32;
}
cout<<str<<endl;
return 0;
}
