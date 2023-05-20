#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int main(){
  
  string s;
  cin>>s;
  string d;
  stack<int> st;
  for(int i=0;i<s.size();i++){

  	int x= s[i]-'0';
  	if(x >=1 && x<=9){
  	   string innum="";
  	   
  	   while(s[i]!= '+'){
  	      innum+=s[i];
  	      i++;
  	   }
  	   
  	   int num = stoi(innum);
  	   i++;
  	   string  in="";
  	   
  	   while(s[i]!='-'){
  	   	in+=s[i];
  	   	i++;
  	   }
  	   
  	   for(int k=0;k<num;k++){
  	   	d+=in;
  	   }	   	
  	}else{
  	    d+=s[i];	
  	}
  }
  //cout<<d<<"\n";
  string copy=d;
  reverse(copy.begin(), copy.end());
  
  if(copy ==d){
    cout<<"Return"<<"\n";
  }else{
    cout<<"Continue"<<"\n";
  }
 
 return 0;
   
}
