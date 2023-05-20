#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;



void printArr(vector<char>& arr){
      for(int j=0;j<arr.size();j++){
         cout<<arr[j]<<" ";
      }
      cout<<"\n";
}
int main(){

  int t;
  cin>>t;
  while(t--){
    int g;
    cin>>g;
    
    while(g--){
    
      int i,n,q;
      cin>>i>>n>>q;
      
      if(n%2==0){
         cout<<n/2<<"\n";
      }else{
      
        if(i==1){
           if(q==1){
  		cout<<n/2<<"\n";           
           }else{
  		cout<<n-n/2<<"\n";         
           }
           
        }else{
           if(q==1){
  		cout<<n-n/2<<"\n";           
           }else{
  		cout<<n/2<<"\n";         
           }
        }
      }
    }
  }
       
  return 0;
}

