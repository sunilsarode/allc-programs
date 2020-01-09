#include<bits/stdc++.h>

using namespace std;
void printalls(string s,int n,string ans,int i,set<string>& st){

    if(n==i){
         //cout<<ans<<endl;
         st.insert(ans);
         return;
    }
    printalls(s,n,ans,i+1,st);
    printalls(s,n,ans+s[i],i+1,st); 
} 



int main(){


string s;
cin>>s;

int n=s.size();
string ans="";
set<string> st;
printalls(s,n,"",0,st);

for(auto v:st){
   cout<<v<<endl;
}
return 0;
}
