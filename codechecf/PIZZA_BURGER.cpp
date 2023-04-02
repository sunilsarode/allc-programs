#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;

while(t--){
 
  int x,y,z;
  cin>>x>>y>>z;
  if(x<y&& x<z){
     cout<<"NOTHING"<<"\n";
  }else{
     if(x>=y){
        cout<<"PIZZA"<<"\n";
     }else{
       cout<<"BURGER"<<"\n";
     }
  }

}

return 0;
}
