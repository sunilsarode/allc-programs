#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;
while(t--){

  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  
  int sum=0;
  for(int i=0;i<n;i++){
     if(arr[i]%2==0){
         cout<<1<<"\n";
         cout<<i+1<<"\n";
         break;
     }else{
	 sum+=arr[i];
         if(sum%2==0){
             if(i-1>=0&&arr[i-1]%2==1){
                  cout<<2<<"\n";
         	  cout<<i-1+1<<" "<<i+1<<"\n";
		  break;
             }
         }
     }
     
  }
  if(sum%2==1&&n==1){
	cout<<-1<<"\n";
  }
  
}
 
return 0;
}
