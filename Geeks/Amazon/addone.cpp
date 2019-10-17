#include<bits/stdc++.h>
using namespace std;

void getresult(vector<int>& v,int n){

   
   v[n-1]=v[n-1]+1;
   int carry=v[n-1]/10;
   v[n-1]=v[n-1]%10;

   for(int i=n-2;i>=0;i--){
       if(carry==1){
           v[i]+=1;
           carry=v[i]/10;
           v[i]=v[i]%10;

       }
   } 
  if(carry==1){
      v.insert(v.begin(),1);
  }
  while(v[0]==0){
     v.erase(v.begin());
  }
 

}
int main(){
 int t;
 cin>>t;
 while(t--){
   int n;
   cin>>n;
   vector<int> v;
   int val;
   for(int i=0;i<n;i++){
      cin>>val;
      v.push_back(val);
   } 
    
   getresult(v,n);

   for(auto var:v){
      cout<<var<<" ";
   }
   cout<<endl;
 }
 return 0;
}
