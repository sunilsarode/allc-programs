#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0){
string s1;
string s2;
cin>>s1;
for(int i=s1.size()-1;i>=0;i--){
   s2=s2+s1[i];
}
cout<<s2;
bool var=true;
for(int i=0;i<s1.size();i++){
    if(i+1<s1.size()){
          if(!(abs(s1[i]-s1[i+1])==abs(s2[i]-s2[i+1]))){
             var=false;
             break;
         }
    }
}
if(var){
  cout<<"Funny"<<endl;
}else{
  cout<<"Not Funny"<<endl;
}
}
return 0;
}
