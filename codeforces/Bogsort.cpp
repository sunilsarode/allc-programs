#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   	 int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
		cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end(),greater<int>());
	    for(auto i:arr){
	       cout<<i<<" ";
	    }
	    cout<<"\n";
	   
    }
   
}
