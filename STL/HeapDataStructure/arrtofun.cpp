#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[10];
 
  for(int i=0;i<10;i++){
      arr[i]=rand()%10;
  }
  fun(arr,10);
 return 0;
}
