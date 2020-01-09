#include<bits/stdc++.h>

using namespace std;


int kadaneSum(vector<int>& arr){
  int cursum=arr[0];
  int maxsofar=arr[0];

  for(int i=1;i<arr.size();i++){
     cursum=max(arr[i],arr[i]+cursum);
     maxsofar=max(maxsofar,cursum);
  }
 return maxsofar;
}
int main(){

int t;
cin>>t;

while(t--){

 int r,c;
 cin>>r>>c;
 
 vector<vector<int>> arr(r,vector<int>(c,0));
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
   }
 }

 /*for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
   }
   cout<<endl;
 }*/

 vector<int> runningRowSum(r,0);

 int maxsumRec=0;
 for(int i=0;i<c;i++){

   for(int k=0;k<r;k++){
      runningRowSum[k]=0;
   }
   for(int j=i;j<c;j++){//j is also less than c
     
     for(int k=0;k<r;k++){
         runningRowSum[k]+=arr[k][j];
     }
     int ans=kadaneSum(runningRowSum);
     maxsumRec=max(maxsumRec,ans);
      
   }
 }
 cout<<maxsumRec<<endl;
}

return 0;
}
