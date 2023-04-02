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
    
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    
    int a=1;
    
    for(int i=1;i<n;i++){
       if(arr[i-1]<arr[i]){
          arr[i]=arr[i-1];
          
       }else{
         a++; 
       }
    }
    
    cout<<a<<"\n";
  }
  

   	
     
  return 0;
}

