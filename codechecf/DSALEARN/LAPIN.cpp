#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  int t;
  cin>>t;
  while(t--){
	
	string s;
	cin>>s;
	int n=s.size();
	vector<int> arr(26,0);
	if(n%2==0){
	    for(int i=0;i<n/2;i++){
	       arr[s[i]-'a']++;
	    }
	    
	    for(int i=n-1;i>=n/2;i--){
	      arr[s[i]-'a']--;
	    }
	
	}else{
	 
	    for(int i=0;i<n/2;i++){
	       arr[s[i]-'a']++;
	    }
	    
	    for(int i=n-1;i>n/2;i--){
	      arr[s[i]-'a']--;
	    }
	
	}
        
           
	    
	    int f=1;
	    for(int i=0;i<26;i++){
	       if(arr[i]!=0){
	          f=0;
	          break;
	       }
	    }
	    
	    if(f==1){
	      cout<<"YES"<<"\n";
	    }else{
	      cout<<"NO"<<"\n";
	    }
            
  }
     
  return 0;
}

