#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
string s;
cin>>n;
vector<string> vec;
for(int i=0;i<n;i++){
cin>>s;
vec.push_back(s);
}

for(int i=0;i<vec.size();i++){
  string str1=vec[i];
  for(int j=0;j<vec.size();j++){
    if(j==i)continue;
         
     string str2=vec[j];
   //  cout<<str2<<endl;
     reverse(str2.begin(),str2.end());
      if(str1==str2){
       cout<<str1.size()<<" "<<str1[str1.size()/2]<<endl; 
       i=n;
       break; 
      }
  }

}

return 0;
}
