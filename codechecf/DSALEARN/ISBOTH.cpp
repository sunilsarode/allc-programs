#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){


  int n;
  cin>>n;
  
  if(n%5==0 && n%11==0){
     cout<<"BOTH"<<"\n";
  }else if(n%5==0 || n%11==0){
     cout<<"ONE"<<"\n";
  }else if(n%5 !=0 && n%11!=0){
  	cout<<"NONE"<<"\n";
  }

return 0;
}
