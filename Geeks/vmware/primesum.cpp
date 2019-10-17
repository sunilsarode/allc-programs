#include <bits/stdc++.h>
using namespace std;


#define max 1000001
int main() {
    
    	vector<int> isprime(max);
	    for(int i=0;i<max;i++){
	        isprime[i]=1;
	    }
	    isprime[0]=0;
	    isprime[1]=0;
	    
	    for(int i=2;i*i<max;i++){
	        if(isprime[i]){
	            for(int j=i*i;j<max;j+=i){
	                isprime[j]=0;
	            }
	        }
	    }
    
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;

	    int f=0;
	    for(int i=2;i<=n/2;i++){
	        if(isprime[i]&&isprime[n-i]){
	            f=1;
	            break;
	        }
	    }
	    
	    if(f){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
