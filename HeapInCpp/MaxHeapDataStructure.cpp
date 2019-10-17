#include<bits/stdc++.h>

using namespace std;

class MinHeap{

  int heapsize=0;
  int capacity=0;
  vector<long> heap;
public:
  MinHeap(int cap){
    capacity=cap;
    heapsize=0;
  }

  void insertKey(long val){
      heap.push_back(val);
      moveUp();     
  }
  void removeMax(){
    if(heap.size()==1){
      long max=heap[0];
      heap.erase(heap.begin());
      cout<<max<<endl;
         
    }else{
      long max=heap[0];
     
      long data=heap[heap.size()-1];
      heap[0]=data;
      heap.erase(heap.begin()+heap.size()-1);
      cout<<max<<endl;
      
      moveDown();
    }
  
  } 

  void moveDown(){
    int k=0;
    int left=2*k+1;
    while(left<heap.size()){
         int max=left;
         int right=left+1;
         if(right<heap.size() && heap[max]<heap[right]){
             max=right;
         }
         if(heap[k]<heap[max]){
             long temp=heap[k];
             heap[k]=heap[max];
             heap[max]=temp;
             k=max;
             left=2*k+1;
         }else{
             // heap property is satisfied so break
             break;
         }
    }   
  }
 
  void moveUp(){
     int k=heap.size()-1;
     while(k>0){
        int p=(k-1)/2;
        int item=heap[k];
        int parent=heap[p];
        if(parent<item){
           heap[p]=item;
           heap[k]=parent;
           k=p;
        }else{
           break;
        }
     }
  } 

 void printMax(){
   cout<<heap[0]<<endl;
 }
 void printHeap(){
   for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
   }
   cout<<endl;
 }
  
};

int main(){

int n;
cin>>n;

MinHeap m(n);
int val;
for(int i=0;i<n;i++){
   cin>>val;
   m.insertKey(val);  
}

m.printMax();
m.printHeap();
m.removeMax();
m.printHeap();

return 0;
}
