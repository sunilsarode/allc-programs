#include<bits/stdc++.h>
using namespace std;
int m;
bool cmp(string &a,string &b){
    
    return a.substr(0,m)<b.substr(0,m);
}

int main(){
int t;
cin>>t;

while(t-->0){
vector<string> vec;
int n,k;
cin>>n>>k>>m;
string s;
for(int i=0;i<n;i++){
cin>>s;   
vec.push_back(s);
}
sort(vec.begin(),vec.end(),cmp);
/**for(int i=0;i<n;i++)
cout<<vec[i]<<endl;*/
cout<<vec[k-1]<<endl;
}

return 0;
}
