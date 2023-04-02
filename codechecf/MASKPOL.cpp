#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;

while(t--){
 
  int n,a;
  cin>>n>>a;
  
  int non= n-a;
  
  if(non>a){
    cout<<a<<"\n";
  }else if(non<a) {
    cout<<non<<"\n";	
  }else{
   cout<<a<<"\n";
  }

}

return 0;
}
