#include<bits/stdc++.h>
using namespace std;

int main(){
int t=0;
cin>>t;

while(t-->0){
  
  int n;
  cin>>n;
  int arr[n];
  int harr[1002]={0};
  int val=0;
  int k=0;
  for(int i=0;i<n;i++){
      cin>>val;
      harr[val]++;
      // it mean it can be either square or rectangle 
      if(harr[val]==2 ||harr[val]==4){
           arr[k++]=val;
      }
  }
  sort(arr,arr+k);
 
  if(k<2){
     cout<<-1<<endl;
  }else{
     cout<<arr[k-1]*arr[k-2]<<endl;
  }
  
 
 
}//end of while
return 0;
}
