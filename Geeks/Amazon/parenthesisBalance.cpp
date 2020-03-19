#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    string s;
	    cin>>s;
	    stack<char> st;
	    for(int i=0;i<s.size();i++){
	        
	        if(s[i]=='('||s[i]=='{'||s[i]=='['){
	             st.push(s[i]);
	             continue;
	        }
	        
	        if(st.empty()){
	             cout<<"not balanced"<<endl;
	             return 0;
	        }
	        char c;
	        switch(s[i]){
	            
	           case ')':
	                 c=st.top();
	                st.pop();
	                if(c!='('){
	                    cout<<"not balanced"<<endl;
	                    return 0;
	                }
	            
	            break;
	            
	            case '}':
	            
	                c=st.top();
	                st.pop();
	                if(c!='{'){
	                    cout<<"not balanced"<<endl;
	                    return 0;
	                }
	            
	            
	            break;
	            
	            case ']':
	            
	                c=st.top();
	                st.pop();
	                if(c!='['){
	                    cout<<"not balanced"<<endl;
	                    return 0;
	                }
	            
	            
	            break;
	        }
	        
	    }
	    
	    if(st.empty()){
	        cout<<"balanced"<<endl;
	    }else{
	        cout<<"not balanced"<<endl;
	    }
	}
	return 0;
}
