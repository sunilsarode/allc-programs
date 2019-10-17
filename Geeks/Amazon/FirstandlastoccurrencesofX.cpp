#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;

while(t--){
   
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
       cin>>arr[i];
  }

  int l=0,r=n-1,mid;
  bool find=false;
  while(l<=r){
     mid=(l+r)/2;
  
     if(arr[mid]==x){
        find=true;
        break;
     }
     
     if(arr[mid]>x){
         r=mid-1;  
     }else{
         l=mid+1;
    }
  }
  if(find==false){
     cout<<-1<<endl;
     continue;
  }
  int mid1=mid;
  //cout<<mid;
  mid1--;
  while(mid1>=0){
      if(arr[mid1]==x){
          mid1--;
     }else{
         
       break; 
     }
  }
  mid1++; 
  mid++;
   while(mid<n){
      if(arr[mid]==x){
          mid++;
     }else{
       
       break; 
     }
  }
  
  
  cout<<mid1<<" "<<--mid<<endl;
}
return 0;
}
