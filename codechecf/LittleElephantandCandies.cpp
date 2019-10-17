#include<bits/stdc++.h>
using namespace std;

int main(){
int t=0;
cin>>t;
while(t-->0){
int n,c,b;
cin>>n>>c;
b=c;
int arr[n];

for(int i=0;i<n;i++){
   cin>>arr[i];
}
int j=0;
for(;j<n;j++){
   if(b<=0){
      break;
   }
   b=b-arr[j];
}
if(b>=0&&j==n){
   cout<<"Yes"<<endl;
}else if(b<=0){
  cout<<"No"<<endl;
}
}
return 0;
}
