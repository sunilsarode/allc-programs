#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int n,k;
  cin>>n>>k;
  
  int x;
  int f=0;
  for(int i=0;i<n;i++){
     cin>>x;
     
     if(x==k){
        f=1;
        break;
     } 
  } 
  
  if(f==1){
     cout<<1<<"\n";
  }else{
     cout<<-1<<"\n";
  }
   	
  return 0;
}
