#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  int t;
  cin>>t;
  while(t--){
	int x;
  	cin>>x;
 
        long long f=0;
        while(x){
            int r= x%10;
            x =x/10;
            f=f*10+r;
        }
        
          
  	cout<<f<<"\n";   
  }
     
  return 0;
}

