#include<bits/stdc++.h>

using namespace std;

vector<int> flip(string A) {
    
    vector<int> v(A.size());
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]=='1'){
           v[i]=-1;
        }else{
            v[i]=1;
        }
    }
    
    int start=0;
    int end=0;
    int s=0;
    int maxSoFar=INT_MIN;
    int curMax=0;
    
    for(int i=0;i<n;i++){
        curMax+=v[i];
        if(maxSoFar<curMax){
            maxSoFar=curMax;
            start=s;
            end=i;
        }else if(curMax<0){
            curMax=0;
            s=i+1;
        }
    }
    vector<int> vec;
    if(maxSoFar<0){
        return vec;
    }else{
        vec.push_back(start+1);
        vec.push_back(end+1);
        
        return vec;
    }
    
    
}

int main(){

  vector<int> v=flip("0011101");

  vector<int> ::iterator it;
  for(it=v.begin();it!=v.end();++it){
      cout<<*it<<" ";
  }
 
  return 0;
}


