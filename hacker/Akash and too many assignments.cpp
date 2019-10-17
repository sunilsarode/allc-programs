#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int chararr[26];

class SegTree{

  int** segtree;
  int size=0;
public :

   SegTree(){}
   SegTree(vector<char>& arr,int n){
       
       this->size=getSegmentTreeSize(n);
       segtree=new int*[size];

       for(int i = 0; i<size; i++){
          segtree[i] = new int[26];
       }
 
       //cout<<segtree[3][5]<<endl;
       
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


  void merge(int left[],int right[],int mergelr[]){

       for(int i=0;i<26;i++){
           mergelr[i]=left[i]+right[i];
       }
  } 	
      
   void constructTree(vector<char>& arr,int low,int high,int pos){
   
         if(low==high){
              segtree[pos][arr[low]-'a']++;
              
              return;
         } 
         int mid=low+(high-low)/2;
         
         constructTree(arr,low,mid,2*pos+1);
         constructTree(arr,mid+1,high,2*pos+2);
         
         merge(segtree[2*pos+1],segtree[2*pos+2],segtree[pos]);
         
   }

   void printTree(){
          for(int i=0;i<this->size;i++){
               cout<<segtree[i]<<" ";
          }
          cout<<endl;
   }

   void getQueryResult(int low,int high,int l,int r,int pos){
          
        if(l<=low&&r>=high){
             
             for(int i=0;i<26;i++){
                   chararr[i]+=segtree[pos][i];
             }
             return;
        }
        if(l>high||r<low){
             return;
        }

        int mid=low+(high-low)/2;

        getQueryResult(low,mid,l,r,2*pos+1);
        getQueryResult(mid+1,high,l,r,2*pos+2);;  
   }

   void updateTree(vector<char>& arr,int low,int high,int index,char nval,int pos){
       
       if(index<low||index>high){
            return;
       }

       if(low==high){
           segtree[pos][arr[index]-'a']--;
           segtree[pos][nval-'a']++;
           arr[index]=nval;//update here not in main
           return ;
       }

       int mid=low+(high-low)/2;

       if(low<=index&&index<=mid){
            updateTree(arr,low,mid,index,nval,2*pos+1);
       }else{
            updateTree(arr,mid+1,high,index,nval,2*pos+2);
       } 

       merge(segtree[2*pos+1],segtree[2*pos+2],segtree[pos]);	
        
   }

};

int main(){

int n,q;

cin>>n>>q;

vector<char> arr(n,0);

for(int i=0;i<n;i++){
  cin>>arr[i];
} 

SegTree s(arr,n);

//s.printTree();
int ch;
while(q--){
   cin>>ch;
   if(ch==1){
       int l,r,k;
       cin>>l>>r>>k;
       --l;
       --r;


       if(k>(r-l+1)){
          cout<<"Out of range"<<endl;
       }else{
           //set array for every query
           for(int i=0;i<26;i++){
             chararr[i]=0;
           }
     
           s.getQueryResult(0,n-1,l,r,0);

           /*for(int i=0;i<26;i++){
               cout<<chararr[i]<<" ";
           }*/
           cout<<endl;
           for(int i=0;i<26;i++){
		if(k<=chararr[i]){
		     cout<<char(i+'a')<<endl;
		     break;
		}
		else{
		     k-=chararr[i];
		}
	   }

       }
      
   }else{

       int index;
       char nval;
       cin>>index>>nval;
       --index;
       
       s.updateTree(arr,0,n-1,index,nval,0);
       //s.printTree();
   }
}


return 0;
}
