#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  double a,b,c;
  cin>>a>>b>>c;
  
  double ar=0;
  
  double s=(a+b+c)/2.0;
  
  double x= s-a;
  double y= s-b;
  double z= s-c;
  
  double cal=1.0*s*x*y*z;
  
  ar =sqrt(cal);
  //cout<<ar<<"\n"; 
  if(ar>0){
     cout<<"YES"<<"\n";
  }else{
     cout<<"NO"<<"\n";
  }
   	
  return 0;
}
