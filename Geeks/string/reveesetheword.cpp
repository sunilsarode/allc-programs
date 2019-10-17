#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
getline(cin,str);
int j=0,k=0;
for(int i=0;i<str.length();i++,j++){

  if(str[j]=='.'){
    
     for(int l=j-1;l>=k;l--){
        cout<<str[l];
      }
     cout<<".";
      k=j+1;

   }//end of if
}//end of for
for(int l=j-1;l>=k;l--){
 cout<<str[l];
}
return 0;
}
