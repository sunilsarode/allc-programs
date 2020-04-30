#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin>>n>>k;
int c=0;
while(n<=k){
  
   n=n*3;
   k=k*2;
   c++;
}
cout<<c<<"\n";
return 0;
}
