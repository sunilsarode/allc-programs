#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,ans;
cin>>n;

if(n==0){
 cout<<0<<endl;
 continue;

}
ans=log2(n&-n)+1;

cout<<ans<<endl;
}
return 0;
}
