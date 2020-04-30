#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
string s;
int i=1;
while(i<=n){
   if(i%2==1){
	s+="I hate";
   }else{
	s+="I love";
   }
   i++;
   if(i<=n){
     s+=" that ";
   }
}
s=s+" it";
cout<<s<<"\n";
return 0;
}
