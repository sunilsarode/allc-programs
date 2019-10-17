#include<bits/stdc++.h>
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 


list<pair<int,int>> li;
int n,t;
int arr[50010]={0};
cin>>n;
for(int i=0;i<n;i++){
  cin>>t;
  li.push_back(make_pair(t,i+1));
}
int count=0; 
while(!li.empty()){
   ++count;
   pair<int,int> p=li.front();
   li.pop_front();
   --p.first;
   if(p.first==0){
      arr[p.second]=count;
   }else{
     li.push_back(p);
   }
}

for(int i=1;i<=n;i++){
  cout<<arr[i]<<endl;
}
return 0;
}
