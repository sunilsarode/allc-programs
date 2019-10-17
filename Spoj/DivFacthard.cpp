#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 100000001
#define max1 1000001
bool isPrime[max1];
vector<int> vec;
void seive();
ll ans(ll n,ll m);
int main(){
seive();
int t;
cin>>t;

 while(t-->0){
         ll n=0;
         ll m=0;
         cin>>n>>m;
         cout<<ans(n,m)<<endl;
    }

return 0;
}

ll ans(ll n,ll m){
  ll result=sqrt(n);
  ll answer=1; 
  ll num=0;
  for(int i=0;vec[i]<=result;i++){
     num++;
     ll k=vec[i];
     ll count=0;
    while(n/k){
      count=(count+(n/k))%m;
      k=k*vec[i]; 
    }
    answer=(answer*((count+1)%m))%m;
  }
  ll gprime=0;  
  while(vec[num]<=n){
     gprime++;
     num++;
  }
  answer=answer*((gprime*2)%m)%m;
   
   return answer;
}

void seive(){

for(int i=0;i<max1;i++){
   isPrime[i]=true;  
} 
isPrime[0]=false;
isPrime[1]=false;
for(int i=2;i*i<max1;i++){
    if(isPrime[i]){
       for(int j=i*i;j<max1;j+=i){
             isPrime[j]=false;
       }
   }
}
vec.push_back(2);
for(int i=3;i<max1;i+=2){
    if(isPrime[i]){
      vec.push_back(i);
    }
}
}
