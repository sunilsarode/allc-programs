#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
 int t;
 cin>>t;
 
 while(t--){
  int n;
  
  cin>>n;
  int s=4*n-1;

  
  vector<int> arr1(s);
  vector<int> arr2(s);
  int x,y;			
  for(int i=0;i<s;i++){
  	
  	cin>>x>>y;

	arr1[i] = x;
	arr2[i] = y;
  }				
   
  int ax =0, ay=0; 
  for(int i=0;i<s;i++){
     ax=ax^arr1[i];
  }
  for(int i=0;i<s;i++){
     ay=ay^arr2[i];
  }
  
  cout<<ax<<" "<<ay<<"\n";
	
 }
 
 return 0;
   
}
