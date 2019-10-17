#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

   int n=0;
   ll d=0;
   cin>>n>>d;
   ll arr[n]={0};
   
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   sort(arr,arr+n);

   /*for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }*/
   int c=0;
   for(int i=0;i<n;){
       if(i+1<n && abs(arr[i]-arr[i+1])<=d){
            i+=2;
            c++;
       }else{
            i++;
       }
   }
   cout<<c<<endl;
   return 0;
}
