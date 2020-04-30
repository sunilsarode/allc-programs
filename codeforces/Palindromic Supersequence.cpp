#include<bits/stdc++.h>

using namespace std;

int main(){
   string s;
   cin>>s;
   string c=s;
   reverse(s.begin(),s.end());
   cout<<c+s<<"\n";
}
