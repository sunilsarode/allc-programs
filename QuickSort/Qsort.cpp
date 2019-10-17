#include<bits/stdc++.h>

using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int left,int right){
  int i=0;
  int j=0;
  int p=arr[left];
  i=left-1;
  j=right+1;
 
while(true){    
  
  do{
     i++;
  }while(arr[i]<p);

  do{
     j--;
  }while(arr[j]>p);

  if(i>=j){
     return j;
  }
  
  //swap(arr[i],arr[j]);
   swap(arr,i,j);
}

}

void qsort(int arr[],int left,int right){

   if(left<right){

      int pindex=partition(arr,left,right);
      cout<<pindex<<endl;
      qsort(arr,left,pindex);
      qsort(arr,pindex+1,right);
  }

}

int main(){
int n=0;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
   cin>>arr[i];
}

qsort(arr,0,n-1);

for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}

return 0;
}
