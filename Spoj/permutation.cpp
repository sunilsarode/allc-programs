#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
int n;
while(t-->0){
 cin>>n;
 int arr[n+1];
 arr[0]=0;
 list<int> li;
 for(int i=1;i<=n;i++){
     cin>>arr[i];
 }
 sort(arr,arr+n+1);
 /*for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
 }*/
 //cout<<endl;

 ll sum=0;

  for(int i=1;i<=n/2;i++){
      li.push_back(arr[i]);
    //cout<<arr[i]<<" ";
      if(n/2==0&&(n/2)+1!=n-i){
   //     li.push_back(arr[n-i]);
        cout<<arr[n-i]<<" ";
      }else if(n/2==1&&(n/2)+1!=n-i){
          li.push_back(arr[n-i]);
        // cout<<arr[n-i]<<" ";
       }
  }
  if(n/2==0)
    li.push_front(arr[(n/2)+1]);
  else
    li.push_front(arr[n/2]);

 list<int> ::iterator it;
 
  for(it=li.begin();it!=li.end();it++){
     cout<<*it<<" "; 
  }
 
 cout<<sum<<endl;
 
}

return 0;
}
