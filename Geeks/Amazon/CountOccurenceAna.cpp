#include<bits/stdc++.h>
using namespace std;

int isAna(string s,string s1){
    int arr[26]={0};
    int arr1[26]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++){
        arr1[s1[i]-'a']++;
    }
    int f=1;
    for(int i=0;i<26;i++){
        if(arr[i]!=arr1[i]){
             f=0;
             break;
        }
    }

    return f;
    
}
int main(){

int t;
cin>>t;

while(t--){
   string s1,s2;
   cin>>s1>>s2;
   
   int k=s2.size();
   string ana;
   for(int i=0;i<k;i++){
       ana+=s1[i];
   }
   int c=0;
   if(isAna(s2,ana)){
       c++;
   }
   int n=s1.size();
   //cout<<n;
   for(int i=k;i<n;i++){
        ana+=s1[i];
       // cout<<i<<" "<<(i-k+1)<<endl;
        ana=s1.substr(i-k+1,k);
        if(isAna(s2,ana)){
            c++;
        }
   }
   cout<<c<<endl;

}
return 0;

}
