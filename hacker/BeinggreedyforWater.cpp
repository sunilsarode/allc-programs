#include<bits/stdc++.h>
using namespace std;
int main(){

int t=0;
cin>>t;
while(t-->0){
int n,c;
cin>>n>>c;

int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
sort(arr,arr+n);
int sum=0;
for(int i=0;i<n;i++){
  if(c>=arr[i]){
    c=c-arr[i];
    sum++;
  }else{
     break;
  }
}
cout<<sum<<endl;
}

return 0;
}


