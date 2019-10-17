#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	
	stack <int> stack;
	
	int m=0;
	cin>>m;
	string arr;
	
	getline(cin,arr);
	for(int i=0;i<arr.length();i++){
		
		cout<<arr[i];
	}
	return 0;
}
