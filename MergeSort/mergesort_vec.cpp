#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& v,int l,int r,int m){

  vector<int> left(m-l+1);//why m-l+1
  vector<int> right(r-m);//why r-m

  for(int i=0;i<left.size();i++){
      left[i]=v[i+l];
  }
  for(int i=0;i<right.size();i++){
      right[i]=v[m+1+i];
  }

  int i=0;
  int j=0;
  int k=l;//vvimp

  while(i<left.size()&&j<right.size()){
  
       if(left[i]<=right[j]){
           v[k]=left[i];
           i++;
       }else{
           v[k]=right[j];
           j++;
       }
        k++;
  }

  while(i<left.size()){
     v[k]=left[i];
     i++;
     k++;
  }

  while(j<right.size()){
     v[k]=right[j];
     j++;
     k++;
  }
  
}

void msort(vector<int>& v,int l,int r){
 
   if(l<r){//1

     int m=l+(r-l)/2;//2
     msort(v,l,m);//3
     msort(v,m+1,r);//4
     merge(v,l,r,m);
   }  
 
}

int main(){

int n;
cin>>n;

vector<int> v(n);

for(int i=0;i<n;i++){
   cin>>v[i];;
}

msort(v,0,n-1);

for(int i=0;i<n;i++){
   cout<<v[i]<<" ";
}
return 0;
}
