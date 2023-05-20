#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    
    double a=0.143*n;
    double x= pow(a,n);
    
    if((x-floor(x))<0.5){
    	cout<<floor(x)<<"\n";
    }else{
    	cout<<floor(x)+1<<"\n";	
    }
  }
       
  return 0;
}

