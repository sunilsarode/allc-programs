#include<bits/stdc++.h>

using namespace std;

class MinHeap{

 
  vector<long> heap;
public:
  MinHeap(){
    
  }

  void insertKey(long val){
      heap.push_back(val);
      moveUp();     
  }
  void removeMin(){
    if(heap.size()==0){
        cout<<"heap is emtpy"<<endl;
        return;
    }
    if(heap.size()==1){
      long min=heap[0];
      heap.erase(heap.begin());
      cout<<min<<endl;
         
    }else{
      long min=heap[0];
     
      long data=heap[heap.size()-1];
      heap[0]=data;
      heap.erase(heap.begin()+heap.size()-1);
      cout<<min<<endl;
      
      moveDown();
    }
  
  } 

  void moveDown(){
    int k=0;
    int left=2*k+1;
    while(left<heap.size()){
         int min=left;
         int right=left+1;
         if(right<heap.size() && heap[min]>heap[right]){
             min=right;
         }
         if(heap[k]>heap[min]){
             long temp=heap[k];
             heap[k]=heap[min];
             heap[min]=temp;
             k=min;
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
        if(parent>item){
           heap[p]=item;
           heap[k]=parent;
           k=p;
        }else{
           break;
        }
     }
  } 

 void decreaseKey(int index,int val){
      int k=index;
      heap[index]=val;
      while(k>0){
         int p=(k-1)/2;
         int item=heap[k];
        
         int parent=heap[p];

         if(parent>item){
             heap[p]=item;
             heap[k]=parent;
             k=p;
        }else{
           break;
        }
     }
 }
 void printMin(){
   cout<<heap[0]<<endl;
 }
 void printHeap(){
   for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
   }
   cout<<endl;
 }
 void deleteKey(int index){
    decreaseKey(index,INT_MIN);
    removeMin();
 }
  
};

int main(){

int n;
cin>>n;

MinHeap m;
int val;
for(int i=0;i<n;i++){
   cin>>val;
   m.insertKey(val);  
}

m.printMin();
m.printHeap();
m.removeMin();
m.printHeap();
m.decreaseKey(1,0);
m.printHeap();
m.deleteKey(5);//it will delete key from index 5
m.printHeap();
return 0;
}
