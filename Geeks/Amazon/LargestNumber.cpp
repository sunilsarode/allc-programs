#include <bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
    return (a+b)>(b+a);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string> vec;
	    int val;
	    for(int i=0;i<n;i++){
	        cin>>val;
	        vec.push_back(to_string(val));
	    }
	   
	    string s;
	    
	    sort(vec.begin(),vec.end(),cmp);
	    if(vec[0]=="0"){
	        cout<<"0"<<endl;
	    }else{
	        for(int i=0;i<n;i++){
	         s+=vec[i];
	        }
	        cout<<s<<endl;   
	    }
	   
	}
	return 0;
}
