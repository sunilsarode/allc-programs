#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

int n,t;
cin>>n>>t;
string s;
cin>>s;
while(t--){
 int i=0;
 while(i<n){
    if(s[i]=='B'&&i+1<n&&s[i+1]=='G'){
        swap(s[i],s[i+1]);
        i+=2;
    }else{
        i++;
    }
 }
}
cout<<s<<"\n";
}
