#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,sum;
	   cin>>n>>sum;
	   int arr[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   int wsum=0;
	   int start=0;
	   int flag=1;
	   for(int i=0;i<n;i++){
	       wsum+=arr[i];
	       
	       while(wsum>sum){
	           wsum=wsum-arr[start];
	           ++start;
	          // cout<<wsum<<endl;
	       }
	       if(wsum==sum){
	           cout<<start+1<<" "<<i+1<<endl;
	           flag=0;
	           break;
	       }
	   }
	   
	   if(flag){
	       cout<<-1<<endl;
	   }
	   
	}
	return 0;
}
