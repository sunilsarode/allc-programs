#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define MAX 5005

vector<ll> isprime(MAX,1);

void seive(){
        
   /*for(int i=0;i<n;i++){
            isprime[i]=1;
   }*/
   isprime[0]=0;
   isprime[1]=0;
   for(int i=2;i*i<MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<MAX;j+=i){
                  isprime[j]=0;
            }
        }
   }
        
}



int main(){

seive();

/*for(int i=0;i<10;i++){
   cout<<isprime[i]<<" ";
}*/
int n;
cin>>n;

vector<ll> arr(n+1);


vector<ll> dp(n+1);

for(int i=1;i<=n;i++){
  cin>>arr[i];
}

for(int i=1;i<=n;i++){
  arr[i]=arr[i]+arr[i-1];
}
/*for(int i=0;i<=n;i++){
   cout<<arr[i]<<" ";
}*/

vector<ll> primes;

for(int i=0;i<MAX;i++){
  if(isprime[i]){
     primes.push_back(i);
  } 
}
/*for(int i=0;i<n;i++){
  cout<<primes[i]<<" ";
}
cout<<"\n";*/
dp[0]=0;
dp[1]=0;

for(int i=2;i<=n;i++){

  dp[i]=dp[i-1];//get the previous value for current sequence 

  for(int j=0;j<primes.size()&&i>=primes[j];j++){
        
      if(i-primes[j]==0){
           dp[i]=max(dp[i],arr[i]);
      }else{
           dp[i]=max(dp[i],arr[i]-arr[i-primes[j]]+dp[i-primes[j]-1]);
      }
  }
}

cout<<dp[n]<<"\n";


return 0;
}
