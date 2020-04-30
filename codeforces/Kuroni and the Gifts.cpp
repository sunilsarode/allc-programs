#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     vector<int> arr(n);
     vector<int> arr1(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        cin>>arr1[i];
     }
     sort(arr.begin(),arr.end());
     sort(arr1.begin(),arr1.end());	   
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<"\n";
      for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
     }
     cout<<"\n";
}

}
