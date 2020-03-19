#include <bits/stdc++.h>
using namespace std;


int main(){
 
  int n;
  cin>>n;
  priority_queue<int> maxh;
  priority_queue<int,vector<int>,greater<int>> minh;
  int x;
  	
    for(int i=0;i<n;i++){
       cin>>x;
       maxh.push(x);  
       minh.push(maxh.top());
       maxh.pop();
       
       if(maxh.size()<minh.size()){
             maxh.push(minh.top());
             minh.pop();
       }
       if(maxh.size()>minh.size()){
           cout<<maxh.top()<<endl;
       }else{
           cout<<floor((minh.top()+maxh.top())*0.5)<<endl;
       }
    }	
  return 0;
}

