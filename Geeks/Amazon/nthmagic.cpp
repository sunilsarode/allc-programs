#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int answer=0,pow=1;

while(n){

 pow=pow*5;

 if(n&1){
   answer=answer+pow;
 }
 
 n>>=1;
}

cout<<answer<<endl;
return 0;
}
