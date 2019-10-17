#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
            int a=0;
	    for(int i=0;i<n;i++){
                a=a^arr[i];
            }
	    cout<<a<<endl;
	}
	return 0;
}
