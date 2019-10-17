#include<bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
void passString(string str);
int main(){
	string str;
	getline(cin,str);
	passString(str);
	return 0;
}

void passString(string str){
	
	for(int i=str.length()-1;i>=0;i--){
		cout<<str.at(i);
	}
	
}
