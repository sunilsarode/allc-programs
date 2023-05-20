#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;


while(t--){
 
  int n,k;
  cin>>n>>k;
  int m=0;
  for(int i=1;i<=k;i++){
    m =max(m,n%i);
  } 
  
  cout<<m<<"\n";
 

}

return 0;
}
