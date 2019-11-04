#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
        cin.ignore();
	while(t--){
	    string s;
            string si;
            
	    getline(cin,s);
            getline(cin,si);
	    
            int j=0;
            //cout<<s<<endl;
	    while(s[j]==' '){
	        j++;
	    }
            //cout<<j<<" "<<s.size()<<endl;
	    s=s.substr(j);
	    //cout<<s<<endl;
	    int n=s.size();
	    j=n-1;
	    while(s[j]==' '){
	        --j;
	    }
	    j++;
	    s=s.substr(0,j);
	    //cout<<s<<" "<<s.size()<<endl;
	    string ans="";
	    vector<string> v;
	    for(auto str:s){
	        if(str==' '){
	   
	            ans+="%20";
	        }else{
	            ans+=str;
	        }
	    }
	   
	    cout<<ans<<endl;
	}
	return 0;
}
