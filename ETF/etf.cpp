#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int maxval=(int)(1e12+2);
int main(){

int n;
cin>>n;

vector<ll> phi(maxval);

for(int i=1;i<maxval;i++){
   phi[i]=i;
}

for(int i=2;i<maxval;i++){

   if(phi[i]==i){
  
      phi[i]=i-1;

      for(int j=2*i;j<maxval;j+=i){
             
          phi[j]=(phi[j]*(i-1)/i);
      }    
   }
}

cout<<phi[n]<<endl;
return 0;
}
