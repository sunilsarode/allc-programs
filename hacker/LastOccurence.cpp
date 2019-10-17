#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t-->0){
map<int,int> mp;
int n,val;
scanf("%d",&n);

map<int,int> ::iterator itr;
for(int i=0;i<n;i++){
  scanf("%d",&val);
  itr=mp.find(val);
  if(itr!=mp.end()){
      mp[val]=i;
  }else{
      mp[val]=i;
 }
 
}
int q,qval;
scanf("%d",&q);

while(q-->0){
 scanf("%d",&qval);
 itr=mp.find(qval);
  if(itr==mp.end()){
      printf("%d\n",-1);
  }else{
      int index=itr->second;
      printf("%d\n",index+1);
  }
}



}
return 0;
}
