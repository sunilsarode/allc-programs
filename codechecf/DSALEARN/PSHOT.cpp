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
    string s;
    cin>>n;
    cin>>s;
    int a=1;
    int b=0;
    int sca=0;
    int scb=0;
    int i=1;
    for(;i<=s.size();i++){
        if(a){
          if(s[i-1]=='1'){
             sca++;
          } 
          a=0;
        }else{
          if(s[i-1]=='1'){
            scb++;
          }
          a=1;
        }

        int sh=0;
        
        if(i%2==0){
        
           int sh=i/2;
           int r=n-sh;
           
           if(sca>scb){
              
              if(sca>(scb+r)){
                 break;
              }
           }else if(scb>sca){
              if(scb>(sca+r)){
                 break;
              }
           } 
        }else{
           int sha=((i-1)/2)+1;
           int shb=((i-1)/2);
           int ra=n-sha;
           int rb=n-shb;
           
           //cout<<ra<<" "<<sca<<" "<<rb<<" "<<scb<<"\n";
           
            if(sca>scb){
              
              if(sca>(scb+rb)){
                 break;
              }
             }else if(scb>sca){
              if(scb>(sca+ra)){
                 break;
              }
           } 
        }
    }
   
    if(i>s.size()){
       cout<<i-1<<"\n";
    } else{
       cout<<i<<"\n";
    }
   }
       
  return 0;
}

