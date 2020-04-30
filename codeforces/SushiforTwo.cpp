#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){

int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
   cin>>arr[i];
}
int c=1;
vector<int> v;
int ans=0;
//vector will hold the count ones,two,one ..
for(int i=1;i<n;i++){
  if(arr[i]!=arr[i-1]){
     v.push_back(c);
     c=1;
  }else{
     c++;
  }
}
v.push_back(c);

for(int i=0;i<v.size()-1;i++){
   ans=max(ans,min(v[i],v[i+1]));
}

cout<<ans*2<<"\n";
}
