#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

	 int t;
	 cin>>t;
	 while(t--){
		int n;
		cin>>n;

		string s;

                ll c=0;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){
                           c++;
                        }
		}
		
                cout<<(c*(c+1))/2<<"\n";		
	 }
 return 0;
}
