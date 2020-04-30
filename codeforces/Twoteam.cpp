#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  vector<ll> arr(n);
  map<ll,ll> mp;
  for(int i=0;i<n;i++){
     cin>>arr[i];
     mp[arr[i]]++;
  }
  
  if(n==1){
     cout<<0<<"\n";
  }else if(mp.size()==n||mp.size()==1){
     cout<<1<<"\n";
  }else{
     ll min1=INT_MAX;
     ll max1=0;
     for (auto i : mp){

        if(i.second>max1){
           max1=i.second;
        }
     } 
     int a=mp.size()-1;//cause 1 element will go to b as it is repeating maximum time

     if(max1<=a){
        cout<<max1<<"\n";
     }else{
       int ans=max1-a>1?a++:a;
       cout<<a<<"\n";
     }   
     
  }

}
}
/*try this

1
15 
1 1 1 2 2 2 3 3 3 4 4 4 4 4 4

*/ 
