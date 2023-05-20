#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;

while(t--){
 
  ll x;
  cin>>x;
  ll c=3*x;
 
  vector<int> arr(c,0);
  
  int co=0;
  while(co<2){
  
     co++;
     arr[co]++;
     c=c-co;
     
     
  }
  
  
  
  for(int  i=0;i<c;i++){
     if(arr[i]!=0){
      cout<<i<<" ";
      
    }  
  }
  cout<<c<<"\n";

}

return 0;
}
