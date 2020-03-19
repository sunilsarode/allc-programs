#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
while(t--){

  int n;
  cin>>n;
  vector<int> arr(n);
  int m=INT_MAX;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(m>arr[i]){
	m=arr[i];
    }
  }
  //cout<<m<<"\n";
  int c=0;
  for(int i=0;i<n;i++){
     c=c+(arr[i]-m);
  }


  cout<<c<<"\n";
}
return 0;
}
