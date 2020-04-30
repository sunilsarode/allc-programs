#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;

int i=1;
vector<int> arr(n);
arr[0]=1;
for(int j=1;j<n;j++){
   int k=4*i;
   arr[j]=arr[j-1]+k;
   i++;
}
/*for(auto v:arr){
  cout<<v<<" ";
}*/
cout<<arr[n-1]<<"\n";
return 0;
}
