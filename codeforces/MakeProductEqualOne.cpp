#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
int n;
cin>>n;

ll ans=0;
ll x=0;
ll z=0;
ll p=0;
ll ng=0;

for(int i=0;i<n;i++){
   cin>>x;
   if(x<0){
     ng++;
     ans+=(abs(x)-1);
   }else if(x>0){
     p++;
     ans+=(x-1);
   }else{
     z++;
   }   
}
  if(ng%2==0){
     ans=ans+z;
  }else{
    if(z>0){
      ans=ans+z;
    }else{
      ans=ans+2;
    }
  }
 cout<<ans<<"\n";

}
