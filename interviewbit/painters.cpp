#include<bits/stdc++.h>
using namespace std;
bool isValid(long long int mid,vector<int>& v,int kp){

   int painters=1;
   long long int currsum=0;

   for(int i=0;i<v.size();i++){
       

       if(currsum+v[i]>mid){
            currsum=v[i];
            painters++;
           
            if(painters>kp){
                return false;
            }
       }else{
           currsum+=v[i];  
       }
   } 
   
   return true;
}
int paint(int kp,int t,vector<int>& v){
   int mod=10000003;
   int n=v.size();
   long long int sum=0;
   for(int i=0;i<n;i++){
       sum=sum+v[i];
   }

   long long int m=INT_MIN;

   for(int i=0;i<n;i++){
       m=(m<v[i]?v[i]:m);
   }
   //cout<<m<<endl;
   long long int low=m;
   long long int high=sum;;
   long long int ans=0;
   while(low<=high){
      long long int mid=low+(high-low)/2L;
      if(isValid(mid,v,kp)){
            ans=mid;
            high=mid-1;
      }else{
           low=mid+1;
      } 
   }

   cout<<ans<<endl;
   return (int)(((ans%mod)*(t%mod))%mod);
}


int main(){
  int n,kp,t;
  cin>>n>>kp>>t; 
  vector<int> p(n);
  for(int i=0;i<n;i++){
       cin>>p[i];   
  }
  cout<<paint(kp,t,p)<<endl;
  
  return 0;
}
