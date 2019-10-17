#include<bits/stdc++.h>
using namespace std;
#define max 8
int arr[max+1]={0};
int isPrime[max+1]={0};
int main(){

isPrime[0]=1;
isPrime[1]=1;
for(int i=2;i*i<=max;i++){
   if(isPrime[i]==0){
       for(int j=i*i;j<=max;j+=i){
          isPrime[j]=1;
     }
  }
}
for(int i=2;i<=max;i++){
  for(int j=2;j*j<=i;j+=i){

   if(i%j==0){
      arr[j]=1;
      arr[i/j]=1;
  }
 }
}
for(int i=0;i<=max;i++){
   cout<<arr[i]<<" ";
} 
cout<<endl;
for(int j=0;j<=max;j++){
   cout<<isPrime[j]<<" ";
} 
return 0;
}
