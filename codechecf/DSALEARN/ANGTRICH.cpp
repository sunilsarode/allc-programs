#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int a,b,c;
  cin>>a>>b>>c;
  int sum=a+b+c;
  
  if(sum==180 &&a>0 &&b>0 && c>0){
    cout<<"YES"<<"\n";
  }else{
    cout<<"NO"<<"\n";
  }
  
  return 0;
}
