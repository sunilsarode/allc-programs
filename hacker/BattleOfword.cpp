#include<bits/stdc++.h>
#include <string>
using namespace std; 
int main(){

int t;
cin>>t;
string a,b;
getline(cin,a);
while(t-->0){


getline(cin,a);
getline(cin,b);
//cout<<a<<endl;
//cout<<b<<endl;
int arr[26]={0};
int brr[26]={0};
for(int i=0;i<a.size();i++){
   if(((int)a[i])>=97&&((int)a[i]<=122))
   arr[a[i]-'a']++;
}
for(int i=0;i<b.size();i++){
   if(((int)b[i])>=97&&((int)b[i]<=122))
    brr[b[i]-'a']++;
}

/**for(int i=0;i<26;i++){
  cout<<brr[i]<<" ";
}
cout<<endl;
for(int i=0;i<26;i++){
  cout<<brr[i]<<" ";
}
cout<<endl;**/
for(int i=0;i<26;i++){
  if(arr[i]==brr[i]){
      brr[i]=0;
      arr[i]=0;
     
  }else if(arr[i]>brr[i]){
         arr[i]-=brr[i];
         brr[i]=0;
  }else if(brr[i]>arr[i]){
         brr[i]-=arr[i];
         arr[i]=0;     
  }
}
/**for(int i=0;i<26;i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<26;i++){
  cout<<brr[i]<<" ";
}**/
int counta=0;
int countb=0;
for(int i=0;i<26;i++){
   if(arr[i]!=0){
      counta++;
   }
}
//cout<<counta<<endl;
for(int i=0;i<26;i++){
   if(brr[i]!=0){
      countb++;
   }
}
//cout<<countb<<endl;
if(counta!=0&&countb==0){
  cout<<"You win some."<<endl;
}else if(countb!=0&&counta==0){
  cout<<"You lose some."<<endl;
}else{
  cout<<"You draw some."<<endl;
}
}//end while

return 0;
}
