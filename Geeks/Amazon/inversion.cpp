#include<bits/stdc++.h>

using namespace std;
typedef long long int ll; 
ll c=0;
void merge(vector<int>& arr,int l,int m,int r){

  int larr=m-l+1;
  int rarr=r-m;
  vector<int> left(larr,0);
  vector<int> right(rarr,0);

  for(int i=0;i<larr;i++){
     left[i]=arr[i+l];
  }
  for(int i=0;i<rarr;i++){
     right[i]=arr[m+1+i];
  }

  int k=l;
  int i=0;
  int j=0;

  while(i<larr&&j<rarr){
     
       if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
       }else{
            arr[k]=right[j];
            c=c+(larr-i);
            j++;
       }
       k++;
  }

  while(i<larr){
    arr[k]=left[i];
    i++;
    k++;
  }
  while(j<rarr){
    arr[k]=right[j];
    j++;
    k++;
  }
}

void mergesort(vector<int>& arr,int l,int r){

   if(l<r){
       int m=l+(r-l)/2;
       mergesort(arr,l,m);
       mergesort(arr,m+1,r);
       merge(arr,l,m,r);
   }
}

int main(){

int t;
cin>>t;

while(t--){
 c=0;
 int n;
 cin>>n;
 
 vector<int> arr(n,0); 
 
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 
 mergesort(arr,0,n-1);

/*for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}

cout<<endl;*/
 cout<<c<<endl;
}


return 0;
}
