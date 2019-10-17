#include<bits/stdc++.h>
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int t=0;
cin>>t;
int n;
while(t-->0){
 map<string,int>  mp; 
 cin>>n;
 string s;
 int val;
 getline(cin,s); 
 for(int i=0;i<n;i++){
   getline(cin,s);
   mp[s]++;
 }
 map<string,int> ::iterator it;
 for(it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
 }
 cout<<endl;
}
return 0;
}

