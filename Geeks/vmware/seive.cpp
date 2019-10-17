#include<bits/stdc++.h>

using namespace std;
int isprime(int n){
  for(int i=2;i*i<=n;i++){
      if(n%i==0){
          return false;
      }
  }
 return true;
}
int main(){
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     if(isprime(n)){
         cout<<"Yes"<<endl;
     }else{
         cout<<"No"<<endl;
     }
  }
  

return 0;
}
