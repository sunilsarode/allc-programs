#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	//map<char,int> mp;
	/*char arr[]={'!','#','$','%','&','*','@','^','~'};
	for(int i=0;i<9;i++){
	    map[arr[i]]++;
	}*/
	while(t--){
	    map<char,int> mp;
	    
	    int n;
	    cin>>n;
	    char nuts[n];
	    char bolts[n];
	    for(int i=0;i<n;i++){
	        cin>>nuts[i];
	        mp[nuts[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        cin>>bolts[i];
	    }
	    /*for(int i=0;i<n;i++){
	        cout<<nuts[i]<<" ";
	    }
	    cout<<"\n";*/
	    map<char,int>::iterator it;
	    for(it=mp.begin();it!=mp.end();it++){
	        cout<<it->first<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
