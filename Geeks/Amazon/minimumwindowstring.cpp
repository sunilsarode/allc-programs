#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s,t;
	    getline(cin,s);
	    getline(cin,t);
	    //cout<<s<<endl;
	    //cout<<t<<endl;
	    
	    int left=0;
	    int right=0;
	    //store all char of string t 
	    unordered_map<char,int> mpt;
	    
	    for(int i=0;i<t.size();i++){
	        mpt[t[i]]++;
	    }
	    //store char of string s
	    unordered_map<char,int> mps;
	    
	    //total charater we need to match
	    int total_match=mpt.size();
            //cout<<total_match<<endl;
	    //window mathc with total characters
	    int window_match=0;
	    
	    //We will keep track of the best window we have seen so far
	    int minWindowSoFar=INT_MAX;
	    string finalstr;
	    
	    while(right<s.size()){
	        
	        //get the left char of s
	        char charAtRight=s[right];
	        
	        //put it in second map
	        mps[charAtRight]++;
	        
	        //does this char is required
	       
	        if(mpt.find(charAtRight)!=mpt.end()){
	           
	            //if char frequency match then increase window_match count
	            if(mps[charAtRight]==mpt[charAtRight]){
	                window_match++;
	            }
	            
	        }
	        //cout<<window_match<<endl;
	        //we found match in window 
	        while(window_match==total_match&&left<=right){
	            
	            //get the char at left ,as we need to move our left 
	            char leftChar=s[left];
	            int windowsize=right-left+1;
		    //cout<<windowsize<<endl;
	            if(windowsize<minWindowSoFar){
	                minWindowSoFar=windowsize;
	                finalstr=s.substr(left,windowsize);
	            }
	            //move left ahead and so remove left char from windwo
	            --mps[leftChar];
	            
	            //is left char ss required one
	            
	            bool  isleftneed=mpt[leftChar];
	            
	            if(isleftneed){
	                //if char needed and its frequency is also fall down then
	                //we need to stop moving left ahead , hence we decrease
	                //window_match so while loop breaks
	                if(mps[leftChar]<mpt[leftChar]){
	                    --window_match;
	                }
	            }
	            
	            
	            left++;
	        }
	        
	        right++;
	    }
	    if(finalstr.size()){
	        cout<<finalstr<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
