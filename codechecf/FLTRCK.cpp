#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int n,q;
cin>>n>>q;
vector<ll> arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
sort(arr.begin(),arr.end());

for(int i=1;i<n;i++){
   arr[i]= arr[i]+arr[i-1];
}



ll x;

while(q--){
   cin>>x;
   int ans;
   int f=0;
   int l=0;
   int h=n-1;
   ans= 0;
   while(l<h){
     int m = l + ((h - l) / 2);
     if(arr[m]<x){
        l=m+1;

     }else if(arr[m]==x){
        f=1;
        ans =m+1;
        break;
     }else {
       h=m;
     }
   }
   
   if(f==1){
       cout<<ans<<"\n";
   }else{
	    // if X is greater than arr[n-1]
	    if(l < n && arr[l] < x) {
	       l++;
	       cout<<l<<"\n";
	    }else{
	       
	       cout<<l<<"\n";
	    }   
     
   }

}

return 0;
}
