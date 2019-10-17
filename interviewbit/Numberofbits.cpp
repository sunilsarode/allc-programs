#include<bits/stdc++.h>

using namespace std;
unsigned int count(unsigned int n){
   unsigned int c=0;
   /*while(n){
     c+=(n&1);
     n>>=1;
   }*/ 

   while(n){
     c++;
     n=n&(n-1);
   }

   return c;
}

int main(){
  unsigned int n;
  cin>>n;

  cout<<count(n)<<endl;
  return 0;
}
