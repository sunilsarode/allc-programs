#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    int val;
	    int oneCount=0;
	    for(int i=0;i<n;i++){
	        cin>>val;
	        
	        if(val==1){
	            oneCount++;
	            v[i]=-1;
	        }else{
	            v[i]=1;
	        }
	    }
	    int maxSoFar=INT_MIN;
	    int curMax=0;
	    int start=0;
	    int end=0;
	    int s=0;
	    
	    for(int i=0;i<n;i++){
	        curMax+=v[i];
	        if(maxSoFar<curMax){
	            maxSoFar=curMax;
	            start=s;
	            end=i;
	        }
	        
	        if(curMax<0){
	            curMax=0;
	            s=i+1;
	        }
	    }
	    /*vector<int> v
	    if(maxSoFar<0){
	        return v;
	    }*/
	    //cout<<maxSoFar<<endl;

            if(maxSoFar<0){
               maxSoFar=0;
            }
	    cout<<maxSoFar+oneCount<<endl;
	   
	}
	return 0;
}
