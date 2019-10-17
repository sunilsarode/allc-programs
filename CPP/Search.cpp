#include <algorithm>
#include <iostream>
void printArr(int arr[],int n);
using namespace std;
void printArr(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	
	int arr[5]={1,2,4,6,0};
	
	printArr(arr,5);
	sort(arr,arr+5);
	printArr(arr,5);
	
	int n=0;
	
	cin>>n;
	
	if(binary_search(arr,arr+5,n)){
		cout<<"True";
	}else{
		cout<<"False";
	}
	
	return 0;
}

