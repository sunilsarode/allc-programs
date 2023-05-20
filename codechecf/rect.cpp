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
  unordered_map<int,int> mp;
  unordered_map<int,int> mp1;
  int x,y;			
  for(int i=0;i<s;i++){
  	
  	cin>>x>>y;
	mp[x]++;
	mp1[y]++;
  }				
   
  int ax,ay; 
  for(auto i: mp){
     if(i.second %2 == 1){
         ax=i.first;
         break;
     }
  }
  
  for(auto i: mp1){
     if(i.second %2 == 1){
         ay=i.first;
         break;
     }
  }
  cout<<ax<<" "<<ay<<"\n";
	
 }
 /*
 
1 1
1 2
2 1
4 3
4 6
9 3
9 6

 */
 
 	

 return 0;
   
}
