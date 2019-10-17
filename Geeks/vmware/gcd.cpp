#include <iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int a,b;
	    cin>>a>>b;
	    long long int gcdv=gcd(a,b);
        
        long long  int lcm=(a*b)/gcdv;
            cout<<lcm<<" "<<gcdv<<endl;
         }
   return 0;
}
