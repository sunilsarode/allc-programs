#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
       if(j<=i){
         cout<<"*";
       }else{
         cout<<" ";
       }
    }
    cout<<"\n";
  }
  
   	
  return 0;
}
