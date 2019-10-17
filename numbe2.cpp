#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
 
ull getLcm(ull a, ull b){
	return a*b/__gcd(a,b);
}
 
ull getDiv(ull a, ull b, ull m){
	ull ans = (ull)(m/a) + (ull)(m/b) - (ull)(m/getLcm(a,b));
	return ans;
}
 
int main() {
 
	int t;
	ull a, b, n;
 
	cin >> t;
	while(t--){
		cin >> a >> b >> n;
		ull d = __gcd(a,b);
		ull l = min(a,b),m;
		ull u =  n*max(a,b)+1,best =0;
		while(l <= u){ 
			m = (l + u + 1) /2;
			if(getDiv(a,b,m) >= n){u = m-1; best =  m;}
			else l = m + 1; 
		}
		cout <<best<<endl;
	}
	return 0;
}
