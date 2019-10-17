#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001

int main(){

int *stack=(int *)malloc(MAX*sizeof(int));
int *queu=(int *)malloc(MAX*sizeof(int));


bool isPrime[MAX];
for(int i=2;i<MAX;i++){
  isPrime[i]=true;
}

for(int i=2;i*i<MAX;i++){
   if(isPrime[i]){
      
     for(int j=i*2;j<MAX;j+=i){
        isPrime[j]=false;
     }
   }
}

int n;
cin>>n;
int k=0,l=0;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
  
}

queu[0]=arr[0];
for(int i=0;i<n;i++){
 if(isPrime[arr[i]]){
      
    queu[k]=arr[i];
    k++;
  }else{
     stack[l]=arr[i];
     l++;
  } 
}

for(int i=0;i<k;i++){
  cout<<queu[i]<<" ";
}
cout<<endl;
for(int j=l-1;j>=0;j--){
  cout<<stack[j]<<" ";
}
return 0;
}
