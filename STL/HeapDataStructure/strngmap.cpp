#include<bits/stdc++.h>

using namespace std;

int main(){

string s="abfdaajs";
unordered_map<char,int> mp;
for(int i=0;i<s.length();i++){
    mp[s[i]]++;
}
unordered_map<char,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++){
  cout<<it->first<<" "<<it->second<<endl;
}  
return 0;

}
