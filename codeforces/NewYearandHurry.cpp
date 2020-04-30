#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;

if(240-k==0){
  cout<<0<<"\n";
}else{

  int r=240-k;
  int sum=0;
  int c=0;
  for(int i=0;i<n;i++){
     sum+=((i+1)*5);
     if(sum<=r){
     	c++;
     }
  }
  cout<<c<<"\n";
}
}
