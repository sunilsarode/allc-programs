#include<bits/stdc++.h>
using namespace std;
int main(){
char arr1[26];
char arr2[26];
int arr[10];

for(int i=0;i<26;i++){
  arr1[i]=i+'a';
  arr2[i]=i+'A';
}
for(int i=0;i<10;i++){ 
  arr[i]=i;
}

/*for(int i=0;i<26;i++){
  //cout<<arr2[i]<<endl;
}*/


int k;
string s;
getline(cin,s);
cin>>k;

for(int i=0;i<s.size();i++){
  if(((int)s[i])>=97&&((int)s[i])<=122){
        int in=((s[i]-'a')+k)%26;
        s[i]=arr1[in];
  }else if(((int)s[i])>=65&&((int)s[i])<=90){
         int in=((s[i]-'A')+k)%26;
        s[i]=arr2[in];
  }else if((s[i]-'0')>=0&&(s[i]-'0')<=9){
        cout<<s[i]<<endl;
        
        int in=((s[i]-'0')+k)%10;
        cout<<in<<endl;
        s[i]=arr[in]+'0';
  }
}
cout<<s<<endl;

return 0;
}
