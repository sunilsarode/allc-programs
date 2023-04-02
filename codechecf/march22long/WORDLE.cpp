#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	

  int t;
  cin>>t;
  
    while (t--){
        string hi,gu;
   
        cin>>hi;
        cin>>gu;
        string m;
        for(int i=0;i<5;i++){
            if (gu[i]==hi[i])
            {
                m+='G';
            }
            else
            {
                m+='B';
            }
        }
        
        cout<<m<<"\n";	
  }
       
  return 0;
}

