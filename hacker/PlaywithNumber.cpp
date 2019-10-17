#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);  
int n,q,l,r;
ll arr[n+1];
ll sum[n+1];
cin>>n>>q;
for(int i=1;i<=n;i++){
 cin>>arr[i];
 sum[i]=arr[i];
}
for(int i=2;i<=n;i++){
 sum[i]=sum[i]+sum[i-1];
}
ll ans=0;
for(int i=0;i<q;i++){
  cin>>l>>r;
  if(l==1){
     ans=sum[r]/(r);
  }else{
     ans=(sum[r]-sum[l-1])/(r-l+1);
  }
  cout<<ans<<endl;
}


return 0;
}
