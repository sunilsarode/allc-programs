#include<bits/stdc++.h>

using namespace std;

int main(){
   string s;
   cin>>s;
   vector<int> arr(s.size());
   arr[0]=(s[0]=='Q')?1:0;
   for(int i=1;i<s.size();i++){
      arr[i]=arr[i-1]+((s[i]=='Q')?1:0);

   }
   /*for(auto i:arr){
       cout<<i<<" ";
   }
   cout<<"\n";*/
   int sum=0;
   for(int i=0;i<s.size();i++){
      if(s[i]=='A'){
         sum=sum+(arr[i]*(arr[s.size()-1]-arr[i]));
      }
   }
   cout<<sum<<"\n";
   
}
