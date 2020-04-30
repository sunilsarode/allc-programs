#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  
  int n;
  cin>>n;
  int pos=0;
  int neg=0;
  int x;
  for(int i=0;i<n;i++){
     cin>>x;
     x>0?(pos+=x):neg+=x;
  }
  cout<<pos-neg<<"\n";
} 
