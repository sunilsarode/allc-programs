#include<bits/stdc++.h>
using namespace std;

struct Data{
   int f;
   char c;
};
struct cmpf{
bool operator()(struct Data d1,struct Data d2){
   //for max heap second object must be greater than first in terms of frequency , vice versa in terms of min heap 
   return d1.f<d2.f;
}
};
int main(){
int t=0;
cin>>t;
while(t--){
  string s;
  cin>>s;
  
  int arr[26]={0};
  for(int i=0;i<s.length();i++){
       arr[s[i]-'a']++;
  }
  
  priority_queue<Data,vector<Data>,cmpf> pq;
  
  /*struct Data d;
  d.f=arr[0];
  d.c=0+'a';
  */
  for(int i=0;i<26;i++){
      if(arr[i]>0){
           struct Data d;
           d.f=arr[i];
           d.c=i+'a';
           pq.push(d);
     }
  }
 
  struct Data prev;
  prev.c='$';
  prev.f=-1;
  string str="";
  while(pq.size()){
     struct Data d=pq.top();
     pq.pop();
     //cout<<d.f<<" "<<d.c<<endl;
     str=str+d.c;
     
     if(prev.f>0){
         pq.push(prev);
     } 
    
     d.f=d.f-1;
     prev=d;
  }
  //cout<<str<<endl;

  if(str.length()==s.length()){
       cout<<1<<endl;
  }else{
       cout<<0<<endl;
  }
}

return 0;
}
