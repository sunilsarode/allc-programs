#include<bits/stdc++.h>
using namespace std;

int main(){

int n,q;
cin>>n>>q;

vector<int> vec[n];
int s,v;
for(int i=0;i<n;i++){
 cin>>s;
   for(int j=0;j<s;j++){
     cin>>v;
     vec[i].push_back(v);
  }
}
int i,j;
while(q-->0){
 cin>>i>>j;
 cout<<vec[i][j]<<endl; 
}
return 0;
}
