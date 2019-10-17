#include <bits/stdc++.h>
using namespace std;

struct Data {
    int s;
    int e;
};

int expandaroundcenter(string& s,int left,int right,int n,Data &d){
    
    while(left>=0&&right<n&&s[left]==s[right]){
        left--;
        right++;
    }
    
    if((right-left-1)>(d.e-d.s+1)){
        d.s=left+1;
        d.e=right-1;
    }
    return right-left-1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    if(s.size()==0){
	        cout<<0<<endl;
	        
	    }else{
	        int start=0;
	        int end=0;
	        
	        Data d;
	        
	        for(int i=0;i<s.size();i++){
	            d.s=0;
	            d.e=0;    
	            int len1=expandaroundcenter(s,i,i,s.size(),d);
	            int len2=expandaroundcenter(s,i,i+1,s.size(),d);
	            
	            int len=max(len1,len2);
	            
	            if(len>(end-start+1)){
	                start=d.s;
	                end=d.e;
	            }
	        }
	        
	        cout<<s.substr(start,end-start+1);
	    }
	    
	    
	    
	}
	return 0;
}
