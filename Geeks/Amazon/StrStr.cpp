#include<bits/stdc++.h>
using namespace std;

int strStrr(const string A, const string B) {
    
    if(A.size()==0||B.size()==0){
        return -1;
    }
    
    int m=A.size();
    int n=B.size();
    
    int index=-1;


    for(int i=0;i<m;i++){
        int j=0;
        if(A[i]==B[j]){
            index=i;
           for(;j<n;j++){
              if(A[i]==B[j]){
                   i++;
                   
              }else{
                   index=-1;
                   i=i-j;
                   break;
              }
           }  
        }

        if(j==B.size()){
            //cout<<j<<endl;
            //cout<<index<<endl;
  	    break;
        }
    }
    
    return index;
    
}
int main(){

  cout<<strStrr("bbbab","bab")<<endl;
}
