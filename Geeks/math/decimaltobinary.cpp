#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
    // cout<<__builtin_popcount(n)<<endl;
    vector<int> v;
    while(n){
        int r=n%2;
        n=n/2;
        v.push_back(r);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<endl;
  }
	return 0;
}
