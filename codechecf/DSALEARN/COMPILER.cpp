#include<bits/stdc++.h>

using namespace std;


int main(){

 int t;
 cin>>t;
 
 while(t--){
    string s;
    cin>>s;
    int n=s.size();
  
    int t=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
           
          t++;
        }else{
          
         t--;
         if(t<0){
           break;   
         }
         if(t==0){
           ans =max(ans,i+1);
         }

        }
        
    }
    
    cout<<ans<<"\n";
 }
 return 0;
}
