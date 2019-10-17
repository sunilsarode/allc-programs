#include<bits/stdc++.h>

using namespace std;

struct Data{
  int s;
  int e;
};

bool cmp(Data d1,Data d2){
    return d1.e<d2.e;
}
int main(){

int t;
cin>>t;
while(t--){

  int n;
  cin>>n;
  vector<Data> v(n);
  for(int i=0;i<n;i++){
       cin>>v[i].s>>v[i].e;
       
      //Data d;
  }

  sort(v.begin(),v.end(),cmp);
 
  /*for(int i=0;i<n;i++){
       cout<<v[i].s<<" ";
  }
  cout<<endl;
  for(int i=0;i<n;i++){
       cout<<v[i].e<<" ";
  }
  cout<<endl;*/

  int end=v[0].e;
  int count=1;
  for(int i=1;i<n;i++){
     if(v[i].s>=end){
         count++;
         end=v[i].e;
     }
  } 
  cout<<count<<endl;
}
return 0;
}
