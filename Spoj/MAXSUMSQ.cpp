#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main(){

int t;
//cin>>t;
scanf("%d",&t);
while(t--){
 ll n;
 scanf("%lld",&n);
 vector<ll> arr(n);
 for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
 }

 unordered_map<ll,ll> mp;
 
 ll curmax=arr[0];
 ll maxsofar=arr[0];

 for(int i=1;i<n;i++){
 
    curmax=max(arr[i],arr[i]+curmax);   
    maxsofar=max(maxsofar,curmax);
    
 }
 //cout<<maxsofar<<endl;

 vector<ll> cumu(n);

 cumu[0]=arr[0]; 
 for(int i=1;i<n;i++){
     cumu[i]+=cumu[i-1];
 }
 
 ll c=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         if(i==0){
            ll sum=0;
            sum=sum+cumu[j];
            if(sum==maxsofar){
                 c++;
            }      
         }else{
            ll sum=0;
            sum=sum+(cumu[j]+cumu[i-1]);
            if(sum==maxsofar){
                 c++;
            } 
         }
   }
 }

 printf("%lld %lld\n",maxsofar,c);
 
 /*mp[0]=1;
 ll sum=0;
 ll res=0;
 for(int i=0;i<n;i++){
    sum+=arr[i];
    if(mp.find(sum-maxsofar)!=mp.end()){
        res=res+mp[sum-maxsofar];
    }

    mp[sum]++;
 }
 

  
 printf("%lld %lld\n",maxsofar,res);*/
}
return 0;
}
