#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  ll a,b,c;
  cin>>a>>b>>c;
  
  vector<int> arr;
  
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  
  sort(arr.begin(),arr.end());
  
  cout<<arr[1]<<"\n";
  
   	
  return 0;
}
