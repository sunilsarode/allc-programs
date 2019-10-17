#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> * getVector(int arr[],int n){
    
    vector<ll>* vec=new vector<ll>();
    
    int powsize=1<<n;
   // cout<<powsize<<endl;
    for(int count=1; count<powsize; ++count) {
        ll p=1;
        for(int j=0; j<n; ++j) {
            if ((count & (1 << j)) != 0) {
					p *= arr[j];
				}
        }
         if (__builtin_popcount(count) & 1){
             vec->push_back(p);
         }else{
             vec->push_back((-1)*p);
         }

    }

    
    return vec;
}
ll getAns(ll k,vector<ll>* & list){
    
    ll low=0;
    ll high = 304250263527210;
		
    ll mid = 0;
    ll ans = 0;

		while (low <= high) {

			mid = low + (high - low) / 2;
			ll term = 0;
			for (unsigned int i = 0; i <list->size(); i++) {
				term = term + (mid / list->at(i));
			}

			if (term >= k) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}

		}
		return ans;
    
}
int main(){
    
    int t=0;
	cin>>t;

	while(t-->0){
		
		int arr[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41 };
		int n=sizeof(arr)/sizeof(arr[1]);
		//cout<<n<<endl;
         vector<ll> * list=getVector(arr,n);
        // for(unsigned int i=0;i<list->size();i++){
			// cout<<list->at(i)<<endl;
		 //}
			 
        ll k=0;
        cin>>k;
        ll val=getAns(k,list);
        cout<<val<<endl;
	}
    return 0;
}
