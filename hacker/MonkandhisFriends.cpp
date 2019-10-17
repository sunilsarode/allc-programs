#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int t;
cin>>t;
while(t-->0){
 map<ll,int> mp;
 int n,m;
 ll l;
 cin>>n>>m;
 
  
 for(int i=0;i<n;i++){
    cin>>l;
    mp[l]++;
 }

 map<ll,int>::iterator it;
 for(int i=0;i<m;i++){
   cin>>l;
   it=mp.find(l);
   if(it!=mp.end()){
     cout<<"YES"<<endl;
    
   }else{
     cout<<"NO"<<endl;
    
   }
    mp[l]++;
 }
}
return 0;
}
