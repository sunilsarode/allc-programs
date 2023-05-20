#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;



int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    int l=0;
    int r=n-1;
    if(n%2==0){
    
       int c=0;
       
       while(l<r){
         if(s[l]!=s[r]){
            c++;
         }
         r--;
         l++;
       }
       
       if(c>k){
           
          cout<<"NO"<<"\n";
       }else{
        
         if((k-c)%2==0){
            cout<<"YES"<<"\n";
         
         }else{
             cout<<"NO"<<"\n";
         }
       }
       
     
    }else{
       int c=0;
       
       while(l<r){
         if(s[l]!=s[r]){
            c++;
         }
         r--;
         l++;
       }
       
       if(c>k){
           
          cout<<"NO"<<"\n";
       }else{
        
          cout<<"YES"<<"\n";
       }
       
    }
      
  }
       
  return 0;
}

