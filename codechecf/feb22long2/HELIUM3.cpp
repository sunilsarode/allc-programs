#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    
    if((a*b)<=(x*y)){
    	cout<<"YES"<<"\n";
    }else{
    	cout<<"NO"<<"\n";
    }
  }
       
  return 0;
}

