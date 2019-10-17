#include<bits/stdc++.h>
using namespace std;
int main(){
int v;
cin>>v;
int n;
cin>>n;
int arr[n];
//vector<int> vec;
for(int i=0;i<n;i++){
  //cin>>val;
  //vec.push_back(val);
  cin>>arr[i];
}
//vector<int>::iterator it;
//it=lower_bound(vec.begin(),vec.end(),v);

//cout<<it-vec.begin()<<endl;

//sort(arr,arr+n);
int low=0;
int high=n-1;
int mid=0;
int index;
while(low<=high){
   mid=(low+high)/2;
   if(arr[mid]==v){
     index=mid;
      break;
   }else if(v<arr[mid]){
     high=mid-1;
   }else{
     low=mid+1;
  }
}
cout<<index<<endl;
return 0;
}


