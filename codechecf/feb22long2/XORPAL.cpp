#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int o=0;
    int z=0;
    for(int i=0;i<n;i++){
       if(s[i]=='0'){
           z++;	
       }else{
           o++;
       }
    }
    
    if(z==0 ||o==0 ||z==o){
       cout<<"YES"<<"\n";
    }else{
    	
    	if(z>o){
    	   if(o%2==0){
    	      cout<<"YES"<<"\n";
    	   }else {
    	      if(z%2==0){
    	         cout<<"YES"<<"\n";
    	      }else{
		 cout<<"NO"<<"\n";	    	      
    	      }
    	      
    	   }
    	}else{
	   if(z%2==0){
    	      cout<<"YES"<<"\n";
    	   }else{
    	      if(o%2==0){
    	        cout<<"YES"<<"\n";
    	      }else{
    	        cout<<"NO"<<"\n";
    	      }
    	      
    	   }	    	
    	}
    }
  }
       
  return 0;
}

