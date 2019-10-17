#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int isprime[n+1];
	    for(int i=0;i<n+1;i++){
	        isprime[i]=1;
	    }
	    isprime[0]=0;
	    isprime[1]=0;
	    
	    for(int i=2;i*i<n+1;i++){
	        if(isprime[i]){
	            for(int j=i*i;j<n+1;j+=i){
	                isprime[j]=0;
	            }
	        }
	    }
	    for(int i=2;i<n+1;i++){
	        if(isprime[i]){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
