#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main(){
int arr[MAX]={0};
//cout<<arr[MAX-1]<<endl;
int n,d;
cin>>n>>d;

for(int i=0;i<n;i++){
  cin>>arr[i];
}
int counter=1;
int score=0;
for(int i=0;i<n;i++){
 
   if(arr[i]<=d){
    
     score++;      
   }else{
      if(counter==0){
           break;
      }
     --counter;
   }
 
}
cout<<score<<endl;
return 0;
}
