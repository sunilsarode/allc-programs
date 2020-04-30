#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];
}
sort(arr.begin(),arr.end());
int i=0;
int t=0;
int j=n-1;
int k=0;
while(i<n-1){
  if(t==0){
	arr[j]=0;
        j--;
        t=1;
  }else{
        arr[k]=0;
        k++;
        t=0;
  }
  i++;
  
}
for(int l=0;l<n;l++){
   if(arr[k]!=0){
      cout<<arr[k]<<"\n";
      break;
   }
}
return 0;
}
