#include<bits/stdc++.h>
using namespace std;

int answer(vector<int>& v){
 
  sort(v.begin(),v.end());
  int n=v.size();
  //cout<<n<<endl;
  int minval=INT_MAX;
  for(int i=0;i<n-1;i++){
     int xorp=v[i] xor v[i+1];
    //cout<<xorp<<endl;
     if(minval>xorp){
        minval=xorp;
     }
  }
  return minval;
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
