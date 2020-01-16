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

ll fun(int i,int n,vector<ll>& arr,vector<ll>& dp){

   if(i>n){
      return 0;
   }
   if(dp[i]!=-1){
        return dp[i];
   }
   if(isprime[n-i+1]){
        if(i==0){

             dp[i]=max(arr[n]+fun(n+2,arr.size()-1,arr,dp),fun(i,n-1,arr,dp));
             return dp[i];
        }else{
             dp[i]=max((arr[n]-arr[i-1])+fun(n+2,arr.size()-1,arr,dp),fun(i,n-1,arr,dp));
             return dp[i];
        }
   }else{

        dp[i]=fun(i,n-1,arr,dp);
        return dp[i];
   }
}


int main(){

seive();

/*for(int i=0;i<10;i++){
   cout<<isprime[i]<<" ";
}*/
int n;
cin>>n;

vector<ll> arr(n);
//vector<vector<ll>> dp(n+1,vector<ll>(n+1,-1));

vector<ll> dp(n+1,-1);

for(int i=0;i<n;i++){
  cin>>arr[i];
}

for(int i=1;i<n;i++){
  arr[i]=arr[i]+arr[i-1];
}
/*for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}*/
ll sum=0;
for(int i=0;i<n;i++){
   ll consum=fun(i,n-1,arr,dp);
   //cout<<consum<<" ";
   sum=max(sum,consum);
}

cout<<sum<<"\n";

/*for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
      cout<<dp[i][j]<<" ";
  }
  cout<<"\n";
}*/


return 0;
}
