#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
 int t=0;
 while(1){

    int n;
    
    //cin>>n;
    scanf("%d",&n);
    if(n==0){
        break;
    }
    t++;
    vector<ll> arr(n);
    ll x;
    ll sum=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
          //cin>>x; 
          scanf("%lld",&x); 
          sum=sum+x;
          if(i==j){
             continue;
          }
          arr[j]=arr[j]+x;
          arr[i]=arr[i]-x; 
       }
    }
    ll actual=0;
    for(int i=0;i<n;i++){
         //printf("%lld ",arr[i]);
         if(arr[i]>0){
              actual+=arr[i];
         }
    }
    printf("%d. %lld %lld\n",t,sum,actual);
    
 }
 return 0;
}
/*
4
  0  50 100   0
150   0  20   0
  0   0   0  30
 30   0   0   0
*/
