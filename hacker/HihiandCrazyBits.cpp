#include<bits/stdc++.h>
using namespace std;
int main(){

int t=0;
cin>>t;
while(t-->0){

 long long int n=0;
 cin>>n;
 
 if(n%2==0){
    cout<<n+1<<endl;
 }else{
    cout<<(n|(n+2))<<endl;
 }

 
}
return 0;
}
