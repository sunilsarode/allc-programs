#include<bits/stdc++.h>
using namespace std;

int main(){
map<string,int> mp;
int n;
cin>>n;
string str;
for(int i=0;i<n;i++){
cin>>str;
mp[str]++;
}
map<string,int> ::iterator it;
for(it=mp.begin();it!=mp.end();it++){
 cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}
