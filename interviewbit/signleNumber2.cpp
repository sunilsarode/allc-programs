#include<bits/stdc++.h>
using namespace std;
int answer(vector<int>& v){
  int res=0;
  for(int i=0;i<32;i++){
     int c=0;
     for(int j=0;j<v.size();j++){
          if((v[j]&(1<<i))!=0){
		c++;
         }
     }
     c=c%3;
     res=res|c<<i;
  }

  return res;
}
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   cout<<answer(v)<<endl;
   return 0;
}
