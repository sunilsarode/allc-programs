#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
int n;
cin>>n;
vector<int> arr(n);
vector<int> dp(n);
for(int i=0;i<n;i++){
   cin>>arr[i];
}
int mc=1;
int ans=0;
int i=0;

for(;i<n-1;i++){
  if(arr[i]<arr[i+1]){
     mc++;
  }else{
     //cout<<mc<<"\n";
     ans=max(ans,mc);
     mc=1;
  }
}
//cout<<i<<" "<<mc<<"\n";
ans=max(ans,mc);
cout<<ans<<"\n";
};

