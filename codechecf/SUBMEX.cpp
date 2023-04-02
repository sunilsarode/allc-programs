#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

int t;
cin>>t;
while(t--){
  int n,k,x;
  cin>>n>>k>>x;
  
  if(x>k){
     cout<<-1<<"\n";
  }else{
  
    for(int i=0;i<n;i++){
       cout<<i%x<<" ";
    }
    cout<<"\n";
  }
}
return 0;
}
