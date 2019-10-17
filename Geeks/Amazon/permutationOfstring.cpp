#include <bits/stdc++.h>
using namespace std;
set<string> st;
void permute(string s,int l,int r){
    
    if(l==r){
        
        //cout<<s<<" ";
        st.insert(s);
    }else{
        
        for(int i=l;i<=r;i++){
            //swap
            swap(s[l],s[i]);
            //permute
            permute(s,l+1,r);
            //back track
            swap(s[l],s[i]);
            
        }
    }
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
	    
	    permute(s,0,s.length()-1);
	    set<string> ::iterator it;
	    for(it=st.begin();it!=st.end();it++){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
            st.clear();
	}
	return 0;
}
