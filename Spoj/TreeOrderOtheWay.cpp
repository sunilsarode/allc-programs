#include<bits/stdc++.h>
using namespace std;
# define max 8000
int farr[max];
void test(int in[],int pre[],int start,int end);
int search(int in[],int val,int start,int end);
int preIndex=0;
int count_var=0;
void test(int in[],int pre[],int start,int end){
   if(start>end){
       return;
    }
   int index=search(in,pre[preIndex++],start,end);
   test(in,pre,start,index-1);
   test(in,pre,index+1,end);
   //cout<<in[index]<<" ";
   //cout<<count_var<<" ";
   farr[count_var++]=in[index];
}

int search(int in[],int val,int start,int end ){
  
  for(int i=start;i<=end;i++){
      if(in[i]==val){
       return i;
    }
  }
   return -1;
}

int main(){
int n;
cin>>n;
int pre[n];
int pos[n];
int in[n];
for(int i=0;i<n;i++){
  cin>>pre[i];
}
for(int i=0;i<n;i++){
  cin>>pos[i];
}
for(int i=0;i<n;i++){
  cin>>in[i];
}

test(in,pre,0,n-1);

int flag=1;
for(int i=0;i<n;i++){
  if(farr[i]!=pos[i]){
    cout<<"no"<<endl;
    flag=0;
    break;
  }
}
if(flag){
    cout<<"yes"<<endl;  
}

return 0;
}
