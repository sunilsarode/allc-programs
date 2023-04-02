#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int stringCount(int n,int x,string &s){
    int c=0;
    int k=0;
    for(int i=0;i<n;i++){
       
     if(s[i]=='0'){
        k++;
        
     }else{
       k=0;
     }
     if(k==x){
        c++;
        k=0;
        int gb=x;
        int m=i;
        while(gb--){
           s.replace(m,1,"1");
           m--; 
        }
     }
     //cout<<k<<" ";
  }
  
  return c;
  
}

int main(){

int t;
cin>>t;

while(t--){
 
  ll n,x;
  string s;
  cin>>n>>x;
  cin>>s;
  int c= stringCount(n,x,s);
  
  //cout<<c<<"\n";
  //cout<<s<<"\n";
  
  int co=stringCount(n,x-1,s); 
  
  //cout<<co<<"\n";

  if(co>0){
    cout<<c+1<<"\n";
  }else{
    cout<<c<<"\n";
  }

}

return 0;
}
