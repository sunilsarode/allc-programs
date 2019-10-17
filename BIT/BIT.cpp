#include<bits/stdc++.h>
using namespace std;

int getSum(int index,int tree[]){

 int sum=0;
 index=index+1;
 
 while(index>0){
    sum+=tree[index];
    index=index-(index&(-index));
 }
 return sum;
}
int getRangeSum(int l,int r,int tree[]){
   return getSum(r,tree)-getSum(l-1,tree);
}
void updateTree(int tree[],int n,int index,int val){
   
   index=index+1;

   while(index<n+1){
       tree[index]+=val;
       
       index=index+(index &(-index));
   }
 
}
int *createTree(int arr[],int n){
   
   int* tree=new int[n+1];
   
   for(int i=0;i<n;i++){
       updateTree(tree,n,i,arr[i]);
   }

   return tree;
}

int main(){

int arr[]={1,4,6,2,7};

int n=sizeof(arr)/sizeof(arr[0]);


int *tree=createTree(arr,n);

/*for(int i=0;i<n+1;i++){
   cout<<tree[i]<<" ";
}*
cout<<endl;*/

cout<<getSum(2,tree)<<endl;//note 3 index mean till index 4 

cout<<getRangeSum(3,4,tree)<<endl;
return 0;
}
