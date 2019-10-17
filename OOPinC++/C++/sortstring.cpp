#include<bits/stdc++.h>

using namespace std;

int main(){

string s="sunil";


cout<<s<<endl;
sort(s.begin(),s.end());

cout<<s<<endl;

vector<string> v;
v.push_back("sunil");
v.push_back("anil");
v.push_back("anjali");
v.push_back("Anu");


sort(v.begin(),v.end());

for(auto var:v){
   cout<<var<<endl;
} 

return 0;
}
