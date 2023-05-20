#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

  int t;
  cin>>t;
  while(t--){
    int a;
    string o;
    cin>>a;
    cin>>o;
    int sum=0;
    while(a--){
    
      string t;
      cin>>t;
      
      if(t=="CONTEST_WON"){
        int r;
        cin>>r;
        if(r>20){
           sum+=300;
        }else{
           sum=sum+(300+20-r);		        
        }
        
        
      }else if(t=="TOP_CONTRIBUTOR"){
        sum+=300;
      }else if(t=="BUG_FOUND"){
        int sev=0;
        cin>>sev;
        sum+=sev;
      
      }else if(t=="CONTEST_HOSTED"){
        sum+=50;
      }
    
    }
    
    if(o=="INDIAN"){
    
       cout<<sum/200<<"\n";
    }else{
      cout<<sum/400<<"\n";
    }
    
    
  }
       
  return 0;
}

