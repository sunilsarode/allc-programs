#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

int t;
cin>>t;

while(t--){
 
  string s;
  int k;
  cin>>s>>k;
  int ans=0;
  for(int i=0;i<s.size();i++){
    vector<int> arr(26,0);
    int count=0;
    int maxForEachSubString =0;
    for(int j=i;j>=0;j--){
         if(arr[s[j]-'a']==0){
            count++;
            
         }
         maxForEachSubString =max(maxForEachSubString,++arr[s[j]-'a']);
         if(count>=k && maxForEachSubString*count ==i-j+1){
           ans++;
         }
          
    }
  }

  cout<<ans<<"\n";
}

return 0;
}
