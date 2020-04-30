#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int> arr={1,5,10,20,100};
int n;
cin>>n;
int c=0;
for(int i=arr.size()-1;i>=0;i--){
	while(1){
	   int d=n-arr[i];
           if(d<0){
                break;
	   }else if(d>0&&d>=arr[i]){
           	n=n-arr[i];
		c++;
           }else if(d==0){
                c++;
		i=-1;              
		break;
	   }else if(d>0){
		n=n-arr[i];
		c++;
           }	
	}	   
}
cout<<c<<"\n";

return 0;
}
