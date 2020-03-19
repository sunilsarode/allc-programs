#include<bits/stdc++.h>

using namespace std;

typedef long long int ll; 

#define MOD 1000000007
 
ll power(ll x,ll y){
  
   if(y==0){
       return 1;
   }else if(y%2==0){
       return power((x*x)%MOD,y/2);
   }else{
       return (x*power((x*x)%MOD,(y-1)/2))%MOD;
   }

}

int main(){

 ll s,n,m;
 cin>>s>>n>>m;
 cout<<power(power(s,n)%10,m)<<endl;
return 0;
}
