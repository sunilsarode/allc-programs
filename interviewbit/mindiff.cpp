#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    int i=0;
    int j=0;
    int k=0;
    
    
    int a=A.size();
    int b=B.size();
    int c=C.size();
    int mind=INT_MAX;
    while(i<a&& j<b&& k<c){
        int max1=max(A[i],max(B[j],C[k]));
        int min1=min(A[i],min(B[j],C[k]));
        
        int cdiff=max1-min1;
        
        mind=min(mind,cdiff);
        
        if(mind==0){
            break;
        }
        if(min1==A[i]){
            i++;
        }else if(min1==B[j]){
            j++;
        }else{
            k++;
        }
    }
    
    return mind;
}

int main(){

 // A : [ 1, 4, 5, 8, 10 ]
//B : [ 6, 9, 15 ]
//C : [ 2, 3, 6, 6 ]
   vector<int> A(5);
   vector<int> B(3);
  vector<int> C(4);
   for(int i=0;i<5;i++){
         cin>>A[i];
   }
   for(int i=0;i<3;i++){
         cin>>B[i];
   }
   for(int i=0;i<4;i++){
         cin>>C[i];
   }
   cout<<solve(A,B,C)<<endl;
}

