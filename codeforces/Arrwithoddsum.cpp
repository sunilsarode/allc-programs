#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){

int n;
cin>>n;
int sum=0;
int x=0;

bool odd=false;
bool even=false;

for(int i=0;i<n;i++){
   cin>>x;
   sum+=x;
   odd=odd|(x%2==1);
   even=even|(x%2==0);
}
if(sum%2==1){
  cout<<"YES"<<"\n";
}else if(even&&odd){
  cout<<"YES"<<"\n";
}else{
  cout<<"NO"<<"\n";
}

}
return 0;
}
