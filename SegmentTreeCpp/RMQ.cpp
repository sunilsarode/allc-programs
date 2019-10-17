#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

class SegTree{

  ll * segtree;
  int size=0;
public :

   SegTree(){}
   SegTree(vector<int>& arr,int n){
       
      
       segtree=new ll[getSegmentTreeSize(n)];
 
       //cout<<segtree[3]<<endl;
       
       constructTree(arr,0,n-1,0);//arr,low,high,position
   }

  ~SegTree(){
       delete[] segtree;
   }


  int getSegmentTreeSize(int N) {
  
     int size = 1;
     for (; size < N; size <<= 1);
     
    return size << 1;  
  }   

      
   void constructTree(vector<int>& arr,int low,int high,int pos){
   
         if(low==high){
              segtree[pos]=arr[low];
              
              return;
         } 
         int mid=low+(high-low)/2;
         
         constructTree(arr,low,mid,2*pos+1);
         constructTree(arr,mid+1,high,2*pos+2);
         
         segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);
         
   }

   void printTree(){
          for(int i=0;i<this->size;i++){
               cout<<segtree[i]<<" ";
          }
          cout<<endl;
   }

   ll getQueryResult(int low,int high,int l,int r,int pos){
          
        if(l<=low&&r>=high){
             return segtree[pos];
        }
        if(l>high||r<low){
             return LLONG_MAX;
        }

        int mid=low+(high-low)/2;

        return min(getQueryResult(low,mid,l,r,2*pos+1),getQueryResult(mid+1,high,l,r,2*pos+2));//min from left and right 
   }

   void updateTree(vector<int>& arr,int low,int high,int index,int nval,int pos){
       
       if(index<low||index>high){
            return;
       }

       if(low==high){
           segtree[pos]=arr[index];
           return ;
       }

       int mid=low+(high-low)/2;

       if(low<=index&&index<=mid){
            updateTree(arr,low,mid,index,nval,2*pos+1);
       }else{
            updateTree(arr,mid+1,high,index,nval,2*pos+2);
       } 

       segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);	
        
   }

};

int main(){

int n,q;

cin>>n>>q;

vector<int> arr(n,0);

for(int i=0;i<n;i++){
  cin>>arr[i];
} 

SegTree s(arr,n);

//s.printTree();
char ch;
while(q--){
   cin>>ch;
   if(ch=='q'){
       int l,r;
       cin>>l>>r;
       --l;
       --r;
       cout<<s.getQueryResult(0,n-1,l,r,0)<<endl;
   }else{

       int index,nval;
       cin>>index>>nval;
       --index;
       arr[index]=nval;
       s.updateTree(arr,0,n-1,index,nval,0);
       //s.printTree();
   }
}


return 0;
}
