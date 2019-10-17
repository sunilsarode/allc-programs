#include<bits/stdc++.h>

using namespace std;
int main(){
int t=0;
cin>>t;

while(t-->0){

 int n;
 cin>>n;
 int k=0;
 while(n){
   
   int t=n%10;
    
   if(t==0){
     t=5;
  }
   
   k=(k*10)+t;
   n=n/10;

 }
 //cout<<k;
 n=k;
 k=0;
  while(n){
   
   int t=n%10;
   /*if(t==0){
      t=5;
   }*/
   k=(k*10)+t;
   n=n/10;

 }
 cout<<k<<endl;
}
 
return 0;
}


