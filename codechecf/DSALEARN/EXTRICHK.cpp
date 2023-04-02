#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int a,b,c;
  cin>>a>>b>>c;
 
  if(a+b>c && b+c>a && c+a>b){
     if(a==b &&b==c && a==c){
       cout<<1<<"\n";
     }else if(a!=b && a!=c && b!=c){
       cout<<3<<"\n";
     }else {
       cout<<2<<"\n";
     }
  }else{
    cout<<-1<<"\n";
  }
  
  return 0;
}
