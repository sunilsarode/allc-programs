#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

int t;
cin>>t;

while(t-->0){
ll k,n;
cin>>k>>n;
ll val;
ll ans=0;
for(int i=0;i<n;i++){
  cin>>val;
  
    if(k<val&&!(val%k==0)){
        ans+=(min(k-(val%k),val%k));
  }else{
       ans+=k-val;
  }
}
cout<<ans<<endl;

}

return 0;
}
