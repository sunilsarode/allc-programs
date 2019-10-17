#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
 
 while(t--){
     int n;
     cin>>n;
     string arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     string str;
     cin>>str;

     /*for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     //cout<<str<<endl;*/

     int hash[26]={0};
     for(int i=0;i<str.length();i++){
         hash[str[i]-'a']++;
     }
     /*for(int i=0;i<26;i++){
         cout<<hash[i]<<" ";
     }*/
     int m=-1;
     string l;
     for(int i=0;i<n;i++){
          string in=arr[i];
         // cout<<in<<endl;
          int j=0;
          for(;j<in.length();j++){
              if(hash[in[j]-'a']>0){
                 
              }else{
                    break;
              }
          }
          //cout<<j<<" "<<in.length()<<" ";
          int k=in.length();
          if(j==in.length()){
               cout<<j<<" "<<in.length()<<" "<<m<<" "<<(m<in.length())<<" "<<(m<j)<<" ";
               
             if(m<in.length()){
                 l=arr[i];
                 m=in.length();
             }
             
          }
     }
    cout<<l<<endl;
    cout<<m<<endl;
     
 } 

return 0;
}
