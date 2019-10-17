#include<bits/stdc++.h>
#define max 101
using namespace std;
int comb(int a,int b);
int fact(int n);
int main(){


/*for(int i=0;i<max;i++){
  arr[i]=0;
}
cout<<arr[max-1];*/
int t;
cin>>t;
while(t-->0){
int arr[max]={0};
int n,val,k;
cin>>n;
for(int i=0;i<n;i++){
  cin>>val;
  arr[val]++;
}

cin>>k;
int count=0;
for(int i=1;i<k;i++){
   if(arr[k-i]>0&&arr[i]>0&&(i==k-i)){
       
       count+=comb(arr[i],2);  
   
     }else{ 
        if(arr[k-i]>arr[i]){
   
           count+=comb(arr[k-i],arr[i]);
        }else if(arr[k-i]<arr[i]){
          count+=comb(arr[i],arr[k-i]);
       }else{
         for(int l=1;l<=arr[i];l++){
            count+=comb(arr[k-1],l);
       }
     }
 
   }
}
cout<<count<<endl;
}
return 0;
}

int comb(int a,int b){
   return fact(a)/(fact(b)*fact(a-b));

}
int fact(int n){
  if(n==0||n==1)
    return 1;
 
  return fact(n)*fact(n-1);
}
