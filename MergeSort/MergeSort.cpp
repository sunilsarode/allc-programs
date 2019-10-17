#include<bits/stdc++.h>

using namespace std;

void printArr(int arr[],int n){
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}


void merge(int arr[],int l,int m,int r){

 int n1=m+1-l;//understand the meaning of this line
 int n2=r-m; //same as above
 int left[n1];
 int right[n2];
 
 for(int i=0;i<n1;i++){
     left[i]=arr[l+i];
 }
 for(int j=0;j<n2;j++){
     right[j]=arr[m+1+j];
 }

 int i=0;
 int j=0;
 int k=l;//vvimp step
 while(i<n1 && j<n2){
    if(left[i]<=right[j]){
        arr[k]=left[i];
        i++;
    }else{
        arr[k]=right[j];
        j++;
    }
     k++;
 }

 while(i<n1){
   arr[k]=left[i];
   ++i;
   ++k;
 }
 while(j<n2){
   arr[k]=right[j];
   ++j;
   ++k;
 }
}
void mergesort(int arr[],int l,int r){
//take care of this condition 
 if(l<r){
  int m=l+(r-l)/2;
  mergesort(arr,l,m);
  mergesort(arr,m+1,r);
  merge(arr,l,m,r);
 }
}

int main(){
int n;
cin>>n;
int arr[n]={0};

for(int i=0;i<n;i++){
   cin>>arr[i];
}
printArr(arr,n);

mergesort(arr,0,n-1);

printArr(arr,n);

return 0;
}
