#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    
    string s;
    cin>>s;
    
    int ca=0;
    int ch=0;
    int d=0;
    for(int i=0;i<s.size();i++){
       if(s[i]=='C'){
          ca++;	
       }else if(s[i]=='N'){
          ch++;
       }else{
          d++;
       }
    }
    
    int carlsen=0;
    int chef=0;
    carlsen =ca*2+d*1;
    chef=ch*2+d*1;
    
    int ans=0;
    if(carlsen>chef){
    
       cout<<60*x<<"\n";
    }else if(carlsen == chef){
       cout<<55*x<<"\n";
    }else{
       cout<<40*x<<"\n";
    }
  }
       
  return 0;
}

