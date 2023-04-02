#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int n;
  cin>>n;
  int c=0;
  int cl=5;
  for(int i=1;i<=n;i++){
    if(i%2!=0){
       int x=cl;
       while(x--){
         c=c+1;
         cout<<c<<" ";
       }
    }else{
       int x=cl;
       vector<int> arr(5,0);
       while(x--){
         c=c+1;
         arr[x]=c;
       }
       for(int j=0;j<5;j++){
          cout<<arr[j]<<" ";
       }
    }
    cout<<"\n";
  }
  return 0;
}
