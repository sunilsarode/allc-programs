#include<bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
#define mod 101
int hashFunction(string input){
	ll val=1;
	for(unsigned int i=0;i<input.length();i++){
		val=val*(19*(input.at(i))*(i+1));
	}
	
	return val%mod;
}
int main(){
	
	
    int t=0;
    cin>>t;
    while(t-->0){
		string arr[101];
		std::fill_n(arr, 101, "0");
		int n=0;
		cin>>n;
		
		for(int i=0;i<n;i++){
			
			string str;
			cin>>str;
			//cout<<str.find("ADD");
			//cout<<str.substr(4);
			string input;
			size_t pos = 0;
			if((pos=str.find("ADD"))!=string::npos){
				input=str.substr(4);
				int key=hashFunction(input);
				//cout<<arr[key];
				if(arr[key]=="0"){
					arr[key]=input;
					cout<<arr[key];
				}else{
					
					
				}	
			}else{
				input=str.substr(4);
				
				 //cout<<input<<endl;
			}
		}
		
	}
	
	return 0;	
}
