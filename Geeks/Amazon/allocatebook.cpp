#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll isValid(vector<ll> v,ll mid,int n,int m){
    
    int studCount=1;
    ll curpsum=0;
    for(int i=0;i<n;i++){
        
        //we have  to follow the order
       
        if(curpsum+v[i]>mid){
            
            curpsum=v[i];
            studCount++;
            if(studCount>m){
                return false;
            }
            
        }else {
            curpsum+=v[i];
            
        }
        
    
    }
    
    return true;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<ll> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int m;
	    cin>>m;
	    
	    if(n<m){
	        cout<<-1<<endl;
	    }else{
	            
	       ll sum=0;
	       ll maxel=INT_MIN; 
	            
	       for(int i=0;i<n;i++){
	            maxel=v[i]>maxel?v[i]:maxel;
	            sum+=v[i];
	       }
	       ll low=maxel;
	       ll high=sum;
	       ll ans=0;
	       while(low<=high){
	          ll  mid=(high+low)/2;
	        
	          if(isValid(v,mid,n,m)){
	            ans=mid;
	            high=mid-1;
	          }else{
	            low=mid+1;
	          }
	       }     
	       cout<<ans<<endl;
	    }
	    
	    
	   
	}
	return 0;
}
