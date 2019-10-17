#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    //cout<<s<<endl;
	    
	    unordered_map<char,int> mpt;
	    for(int i=0;i<s.size();i++){
	        if(mpt.find(s[i])==mpt.end()){
	            mpt[s[i]]++;
	        }
	    }
	    
	    int match_count=mpt.size();
	    int window_match=0;
	    
	    int left=0;
	    int right=0;
	    
	    unordered_map<char,int> mps;
	    
	    int minwindowsize=INT_MAX;
	    string finalstr;
	    
	    while(right<s.size()){
	        
	       char atright=s[right];
	       
	       mps[atright]++;
	       
	       if(mpt.find(atright)!=mpt.end()){
	           
	           if(mps[atright]==mpt[atright]){
	               window_match++;
	           }
	       }
	       
	       while(match_count==window_match&&left<=right){
	           
	           char atleft=s[left];
	           
	           int wsize=right-left+1;
	           string inner=s.substr(left,wsize);
	           if(wsize<minwindowsize){
	               minwindowsize=wsize;
	               finalstr=inner;
	           }
	           --mps[atleft];
	           
	           if(mpt[atleft]){
	               if(mps[atleft]<mpt[atleft]){
	                  window_match--;   
	               }
	           }
	           
	           left++;
	           
	       }
	       
	        right++;
	    }
	    
	    cout<<finalstr<<endl;
	    
	}
	return 0;
}
