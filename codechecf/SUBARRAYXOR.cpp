#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

int t;
cin>>t;
int x=100000;
vector<int> arr(x,0);
arr[0]=1;
int c=1;

for(int i=1;i<x;i++){
    arr[i] = (c+1)^c;
    c++;	
}

while(t--){
 
  ll n;
  cin>>n;
  
  for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
  }
  cout<<"\n"; 

}

return 0;
}
