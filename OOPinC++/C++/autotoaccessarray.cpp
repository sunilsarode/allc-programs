#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[5];
  for(int i=0;i<5;i++){
     arr[i]=rand()%5;
  }
  for(auto var:arr){
     cout<<var<<" ";
  }
  return 0;
}
