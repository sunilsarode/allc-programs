#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
 int t;
 cin>>t;
 
 while(t--){
  int n;
  cin>>n;
  
  vector<int> arr1(n);
  vector<int> arr2(n);
  vector<int> arr3(n);
  
  for(int i=0;i<n;i++){
  	cin>>arr1[i];
  }
  for(int i=0;i<n;i++){
  	cin>>arr2[i];
  }
  
  for(int i=1;i<n;i++){
  	arr3[i]= arr1[i]-arr1[i-1];
  }
  arr3[0] =arr1[0];
  int c=0;
  for(int i=0;i<n;i++){
     if(arr2[i]<=arr3[i]){
       c++;
     }
  }
  
  cout<<c<<"\n"; 	
	
 }
 
 return 0;
   
}
