#include<bits/stdc++.h>
using namespace std;

int main(){
int t=0;
cout>>t;
if(t>0||t<11){
while(t-->0)
string s;
cin>>s;
if(s.lenght()>100||s.lenght()<0){
cout<<"Invalid Input"<<endl;
}else{
   int larr[26]={0};
   int uarr[26]={0};

  for(int i=0;i<s.length();i++){
	if((int)s[i]>=97&&(int)s[i]<=122){
             larr[s[i]-'a']++;
         
        }else if((int)s[i]>=65&&(int)s[i]<=90){
             arr[s[i]-'a']++;
        }
   }
   int min=1000;
   int count=0;
   for(int i=0;i<26;i++){
        if(larr[i]!=0){
            count++;
        } 
   }
  
   int count1=0;
   for(int i=0;i<26;i++){
        if(uarr[i]!=0){
            count1++;
        } 
   }

   if(count==0&&count1!=0){
        cout<<0<<endl;
    }else if(count1==0&&count!=0){
        cout<<0<<endl;
    }else if(count1==0&&count==0){
        cout<<"Invalid Input"<<endl;
    }else{
       if(min>count){
           min=count;   
        } 

       if(min>count1){
          min=count1;
       }
       cout<<min<<endl;
     }  

}
}
}else{
cout<<"Invalid Test"<<endl;
}

return 0;
}

