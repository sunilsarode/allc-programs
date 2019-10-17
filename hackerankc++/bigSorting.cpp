#include<bits/stdc++.h>
using namespace std;


  bool cmp(string const & lhs, string const & rhs) 
  {
    if(lhs.size()==rhs.size())
        return lhs < rhs;
     return lhs.size()<rhs.size();
  }



int main(){
vector<string> v;
int n;
cin>>n;
string s;
for(int i=0;i<n;i++){
  cin>>s;
  v.push_back(s);
}
sort(v.begin(),v.end(),cmp);
vector<string>::iterator it;
for(it=v.begin();it!=v.end();++it){
   cout<<*it<<endl;
}
return 0;
}
