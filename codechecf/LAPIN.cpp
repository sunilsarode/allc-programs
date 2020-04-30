#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;

    if(s.size()%2==0){

      int n=s.size();
      int i=(s.size()/2);
      int j=i-1;

      unordered_map<char,int> mp;
      
      
      while(j>=0){
        mp[s[j]]++;
        j--;
      }

      while(i<n){
        mp[s[i]]--;
        i++;
      }
      int flag=1;
      for(auto v:mp){
         if(v.second!=0){
            cout<<"NO"<<"\n";
            flag=0;
            break;
         }
      }
      if(flag){
         cout<<"YES"<<"\n";
      }
      
    }else{

      int n=s.size();
      int i=(s.size()/2);
      
      int j=i-1;
      i++;

      unordered_map<char,int> mp;
      
      
      while(j>=0){
        mp[s[j]]++;
        j--;
      }

      while(i<n){
        mp[s[i]]--;
        i++;
      }
      int flag=1;
      for(auto v:mp){
         if(v.second!=0){
            cout<<"NO"<<"\n";
            flag=0;
            break;
         }
      }
      if(flag){
         cout<<"YES"<<"\n";
      }

    }
  }
  return 0;
}
