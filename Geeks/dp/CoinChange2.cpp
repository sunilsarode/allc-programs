#include<bits/stdc++.h>

using namespace std;

int cways(vector<int>& arr,int amount,int index,vector<vector<int>>& dp){

   if(amount==0){
       return 1;
   }
   if(index>=arr.size()){
         return 0;
   }
   if(dp[index][amount]!=0){
       return dp[index][amount];
   }
   int way1=0;
   if(arr[index]<=amount){
        way1=cways(arr,amount-arr[index],index,dp);// include,note we do not do index+1 as it is infinite coin suplie
   }

   int way2=cways(arr,amount,index+1,dp);//not include,we got
 
   //cout<<way1<<" "<<way2<<" "<<amount<<endl;
   dp[index][amount]=way1+way2;
   return dp[index][amount];
}

int change(vector<int>& arr,int amount,vector<vector<int>> dp){

  return cways(arr,amount,0,dp);
}

int main(){

int amount;
int n;
cin>>n>>amount;
vector<int> arr(n);

for(int i=0;i<n;i++){
   cin>>arr[i];
}
 if(amount<0){
     return 0;
 }
vector<vector<int>> dp(arr.size(),vector<int>(amount+1,0));
cout<<change(arr,amount,dp)<<endl;
return 0;
}
