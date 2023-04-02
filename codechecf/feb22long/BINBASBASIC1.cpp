#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int isPalindrome(string &S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 

        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return 0;
        }
    }

    return 1;
}

int palindrome(string &s,map<string,int>& mp){
   auto itr= mp.find(s);
   if(itr==mp.end()){
   	
      	int ans=isPalindrome(s);

	mp[s]=ans;
	return mp[s];
   }else{
      //cout<<s<<"\n";
      return mp[s];
   }
}

int fun(string &s,int n,int k,map<string,int>& mp,int j){
    //cout<<s<<" "<<k<<"\n";
    if(k==0){
      return palindrome(s,mp);
    }else{
      int ans=0;
      for(int i=j;i<n;i++){
       string ns=s;
        char ch=s[i];
	if(ch=='1'){
	   if(k%2!=0){
	      ch='0';
	   }
	}else{
	   if(n%2!=0){
	     ch='1';	
	   }
	   	
	}
	string rep;
	rep+=ch;
	
	ns.replace(i,1,rep);
	ans=palindrome(ns,mp);
	if(ans){
	    return ans;
	}
      }
      
      string ns=s;
      char ch=s[j];
	if(ch=='1'){
	   ch='0';
	}else{
	   ch='1';	
	}
	string rep;
	rep+=ch;
	ns.replace(j,1,rep);   
      
       return fun(ns,n,k-1,mp,j+1);
      
    }	
    
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    map<string,int> mp;
    int ans=0;
    for(int j=0;j<n;j++){
       ans=fun(s,n,k,mp,j);
    }
    if(ans){
       cout<<"YES"<<"\n";
    }else{
       cout<<"NO"<<"\n";
    }
     
  }
       
  return 0;
}

