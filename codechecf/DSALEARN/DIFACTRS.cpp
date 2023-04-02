#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){


  int n;
  cin>>n;
  vector<int> arr(n+1,0);
  int c=0;
  for(int i=1;i<=n;i++){
     if(n%i==0 && arr[i]==0){
        arr[i]++;
        c++;
     }
  }
  
  cout<<c<<"\n";
  
  for(int i=1;i<=n;i++){
     if(arr[i]==1){
        cout<<i<<" ";
     }
  }
return 0;
}
