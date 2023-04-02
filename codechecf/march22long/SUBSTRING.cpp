#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


 
 
 int main(){
 
   int t;
   cin>>t;
   
   while(t--){
     
     string s;
     cin>>s;
     int n=s.size();
     char f=s[0];
     char l=s[n-1];
     int m=-1;
     int li=1;
     for(int i=1;i<n;i++){
        
        if(s[i]==f ||s[i]==l){
            //cout<<li<<" "<<i<<"\n";
            if(li!=i){
                string in=s.substr(li,((i-1)-li)+1);
                int len=in.size();
                m=max(len,m);
                li=i+1;
            }else{
              li++;
            }
        }
   
     }

     cout<<m<<"\n";
     
   }
   return 0;
 }
 
 
 
