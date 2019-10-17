#include<bits/stdc++.h>
using namespace std;

int main(){
  int *ptr=new int[5];

  for(int i=0;i<5;i++){
      cout<<ptr[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<5;i++){
     cin>>*(ptr+i);
  }
  for(int i=0;i<5;i++){
     cout<<*(ptr+i)<<" ";
  }

  delete []ptr;
}
