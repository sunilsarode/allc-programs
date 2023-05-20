#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	

  int t;
  cin>>t;
  
  while(t--){
      int n;
      cin>>n;
      
        if (n%2==0)
        {
            cout<<n/2<<"\n";
        }
        else if (n%2!=0)
        {
            cout<<((n-1)/2)+1<<"\n";
        }
  
  }
       
  return 0;
}

