#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000000

vector<int>* seive(){
	
	bool isPrime[MAX+1];
	vector<int>* vect=new vector<int>();
	for(int i=0;i<=MAX;i++){
		isPrime[i]=true;
	}
	isPrime[0]=false;
	isPrime[1]=false;
	for(int i=2;i*i<=MAX;i++){
		
		if(isPrime[i]==true){
			for(int j=i*2;j<=MAX;j+=i){
				isPrime[j]=false;
			}
		}
	}
	vect->push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(isPrime[i]){
			vect->push_back(i);
		}
	}
  	return vect;
}
  

int main(){
	
	vector<int> * list=seive();
	
	ll a=0,b=0;
	cin>>a;
	cin>>b;
	
	
	for(ll i=a;i<=b;i++){
	   ll n=i;
	   ll res=n;
	   for(int j=0;list->at(j)*list->at(j)<=b;j++){
		   if(n%list->at(j)==0){
			   res=res-(res/list->at(j));
			   while(n%list->at(j)==0){
				   n/=list->at(j);
			   }
		   }
	   }
	   if(n>1){
		   res=res-(res/n);
	   }
	   cout<<res<<endl;	
	}
	return 0;
}
