#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;

while(t--){
 
  int n;
  cin>>n;
  
  
  
  if(n==1){
      cout<<'a'<<"\n";
  }else{
     
     
        string s;
        int c='a';
       
        s+='a';
        for(int i=s.size();i<n;i++){
            c=c+1;
            if(c>122){
               c=97;
            }
            if(s.size()%2==1){
               s+=(char)c;
            }else{
               reverse(s.begin(),s.end());
               s+=(char)c;
            }
        }
        cout<<s<<"\n";
    
  }  

}

return 0;
}
