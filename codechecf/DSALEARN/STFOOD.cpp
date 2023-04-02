#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    
    int n,si,vi,pi;
    cin>>n;
    int m=0;
    for(int i=0;i<n;i++){
    	int pf=0;
    	cin>>si>>pi>>vi;
    	if((pi%(si+1))==0){
    	    pf=(pi/(si+1))*vi;
    	    
    	}else{
    	    pf= floor((pi/(si+1)))*vi;
    	}
    	if(m<pf){
    	       m=pf;
    	} 	
    }
    cout<<m<<"\n";
    
   }
       
  return 0;
}

