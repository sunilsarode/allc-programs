#include<bits/stdc++.h>

using namespace std;
string reverse(string str){

  int n=str.size();
  int s=0;
  int e=0;

  for(int i=0;i<n;i++){
     if(str[i]==' '){
           s++;
     }else{
         break; 
     }
  }

  for(int j=n-1;j>=0;j--){
     if(str[j]==' '){
         e++;
     }else{
         break;
     }
  }

  str=str.substr(s);
  //cout<<str<<endl;
  str=str.substr(0,str.size()-e);

  //cout<<str.size()<<endl;
  int newn=str.size();
  int i=0;
  int j=0;
  string res="";
  int spacec=0;
  while(j<newn){
    if(str[j]==' '){
         int k=j-1;
         while(k>=i){
            res+=str[k--];
         }
       res+=' ';
       spacec=1;
    }

    j++;

    if(spacec){
        while(j<n&&str[j]==' '){
          j++;
       }
       i=j;
       spacec=0;
    }
  }

   int k=j-1;
   while(k>=i){
           res+=str[k--];
   }

  
  //cout<<res<<" "<<res.size()<<endl;
   
  string f="";
  for(int k=res.size()-1;k>=0;k--){
       f+=res[k];
  }
  //cout<<f.size()<<endl;
  return f;
}
int main(){

cout<<reverse("  the  sky   is   blue ")<<endl;
return 0;
}
