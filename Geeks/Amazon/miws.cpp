#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin,s);
	    //cout<<s<<endl;
	    int mpt[26]={0};
	    int c=0;
	    for(int i=0;i<s.size();i++){
	        if(mpt[s[i]-'a']==0){
	            mpt[s[i]-'a']++;
	            c++;   
	        }
	    }
            /* for(int i=0;i<26;i++){
	        cout<<mpt[i]<<" ";
	    }
            cout<<endl;*/
	    
	    int match_count=c;
	    int window_match=0;
	    
	    int left=0;
	    int right=0;
	    
	    int mps[26]={0};
	    
	    int minwindowsize=INT_MAX;
	    string finalstr;
	    
	    while(right<s.size()){
	        
	       char atright=s[right];
	       
	       mps[atright-'a']++;
	       //cout<<mpt[atright-'a']<<endl;
	       if(mpt[atright-'a']==1){
	           
	           if(mps[atright-'a']==mpt[atright-'a']){
	               window_match++;
	           }
	       }
	       
	       //cout<<window_match<<endl;
	       while(match_count==window_match&&left<=right){
	           
	           char atleft=s[left];
	           
	           int wsize=right-left+1;
	           //string inner=s.substr(left,wsize);
	           if(wsize<minwindowsize){
	               minwindowsize=wsize;
	               //finalstr=inner;
	           }
	           --mps[atleft-'a'];
	           
	           if(mpt[atleft-'a']){
	               if(mps[atleft-'a']<mpt[atleft-'a']){
	                  window_match--;   
	               }
	           }
	           
	           left++;
	           
	       }
	       
	        right++;
	    }
	    
	    cout<<minwindowsize<<endl;
	    
	}
	return 0;
}
