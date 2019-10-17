#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

 int m,k,n;
 cin>>m>>k>>n;
 string s;
 int b=m;

 while(m){
   s=s+to_string(m%2);
   m=m/2;
 }
 
 reverse(s.begin(),s.end());
 //cout<<s;
 string s2;
for(int l=0;l<n;l++){
   s2="";
   for(int i=0;i<s.length();i++){
     	if(s[i]=='1'){
     	    s2=s2+"10";
    	 }else{
            s2=s2+"01";
     	}
   }
   s=s2; 
   //cout<<s<<endl;
}
 //cout<<s2;
 cout<<s[k];

}
return 0;
}


