#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 

bool checkItisMaximiseMinDistance(vector<ll> arr,ll mid,ll n,ll c){
    
   ll co=1;
   ll prev=arr[0];
   for(int i=1;i<n;i++){
        if(arr[i]-prev>=mid){
            co++;
            prev=arr[i];
        }
      //if we can place all cow such that distance between them is mid (which is maximum min distance as of now ) return true
        if(c==co){
            return true;
        }
   }

   
   if(co<c){
       return false;
   }

   return true;//only one cow is there
}
int main(){

int t;
cin>>t;
while(t--){
ll n,c;
cin>>n>>c;

vector<ll> arr(n);
for(int i=0;i<n;i++){
   cin>>arr[i];
}
sort(arr.begin(),arr.end());
//1 2 4 8 9
ll l=arr[0];
ll r=arr[n-1];
ll ans=0;
 while(l<=r){
   
 ll m=l+(r-l)/2;
 
 if(checkItisMaximiseMinDistance(arr,m,n,c)){
    ans=m;//you got one min distance 
    l=m+1;//try to maximise it   
 }else{
    r=m-1;
 }

 }//end of while

 cout<<ans<<endl;
}
return 0;
}
