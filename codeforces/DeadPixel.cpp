#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
  int a,b,x,y;
  cin>>a>>b>>x>>y;
  int ar=0;
  if(x-1>=0){
     ar=max(ar,x*b);
  }
  if(x+1<a){
     ar=max(ar,(a-(x+1))*b);
  }
  if(y-1>=0){
     ar=max(ar,y*a);
  }
  if(y+1<b){
     ar=max(ar,(b-(y+1))*a);
  }
  cout<<ar<<"\n";
}
return 0;
}
