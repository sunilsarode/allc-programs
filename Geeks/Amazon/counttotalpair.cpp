#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int  n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    map<int,int> mp;
	    
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    
	    //cout<<mp[8]<<endl;
	    int total=0;
	    for(int i=0;i<n;i++){
	        //cout<<mp[sum-arr[i]]<<" ";
	        total+=mp[sum-arr[i]];
	        
	        if(sum-arr[i]==arr[i]){
                      
	            --total;
	        }
	    }
	    //cout<<endl<<total<<endl;
	    cout<<total/2<<endl;
	}
	return 0;
}
