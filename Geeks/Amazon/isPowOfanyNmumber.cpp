
#include <bits/stdc++.h>
using namespace std;
int isp(int x){
     if(x==1){
	        
            return  1;
     }else{
	     for(int i=2;i*i<x+1;i++){
	        
	        int y=2;
	        double p=pow(i,y);

	        while(p>0&&p<=x){
		    //cout<<p<<endl;
	            if(p==x){
	                 return 1;       
	            }
	            y++;
	            p=pow(i,y);
	        }
	    } 
	    return 0;
	 }
	    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    cout<<isp(x)<<endl;
	}
	return 0;
}
