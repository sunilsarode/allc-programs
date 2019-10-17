#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum=0;
  for(int i=1;i<n;i++){
     int j=i-1;
     int val=arr[i];
     int count=0;
     while(j>=0&&arr[j]>val){
          arr[j+1]=arr[j]; 
          j=j-1;
         count++;
     }
     arr[j+1]=val;
     sum+=count;
  }
 /* for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }*/
  cout<<sum<<endl;
}

}
