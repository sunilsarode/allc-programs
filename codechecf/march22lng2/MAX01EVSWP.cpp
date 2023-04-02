#include<bits/stdc++.h>
using namespace std;

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);  	
	
    int t;
    cin>>t;
     
    while (t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int c=0;
        int o=0;
        int e=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(s[i]=='1' &&i-1>=0&&s[i-1]=='0'){
                c++;
                mp[i]++;
                mp[i-1]++;
            }else{
             if(s[i]=='1'){ 
               if(i%2==0){
                  e++;
               }else{
                  o++;
               }
             }
            }
        }
        
        for(int i=0;i<n;i++){
          
                if(i%2==0){
                  if(e>0 && s[i]=='1' &&mp[i]==0 && i-1>0 &&mp[i-1]==0 &&s[i-1]=='1'){
                      c++;
                      e--;
                  }
               }else{
                  if(o>0 && s[i]=='0' &&mp[i]==0 && i-1>0 &&mp[i-1]==0 &&s[i-1]=='0'){
                      c++;
                      o--;
                  }
               }
        
        }
        
        cout<<c<<"\n";
        
    }   
   return 0;

}
