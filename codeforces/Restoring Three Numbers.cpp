#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 
int main(){

ll a,b,c,d;

cin>>a>>b>>c>>d;

ll sum=a+b+c+d;

sum=sum/3;

if(sum==a){
  cout<<sum-b<<" "<<sum-c<<" "<<sum-d<<"\n";
}else if(sum==b){
  cout<<sum-a<<" "<<sum-c<<" "<<sum-d<<"\n";
}else if(sum==c){
  cout<<sum-b<<" "<<sum-a<<" "<<sum-d<<"\n";
}else if(sum==d){
  cout<<sum-b<<" "<<sum-c<<" "<<sum-a<<"\n";
}
return 0;
}
