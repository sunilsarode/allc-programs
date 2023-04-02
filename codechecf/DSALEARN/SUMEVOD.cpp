#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  ll n;
  cin>>n;
  ll esum=0;
  ll osum=0;
  ll c=0;
  ll cn=n;
  while(cn){
     c++;
     
     if(c%2!=0){
     	osum+=c;
     	cn--;
     }
  }
  cn =n;
  c=0;
  while(cn){
     c++;
     
     if(c%2==0){
     	esum+=c;
     	cn--;
     }
  }
  
  
  cout<<osum<<" "<<esum<<"\n";
   	
  return 0;
}
