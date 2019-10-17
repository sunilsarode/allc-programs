#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 

int reverse=0;
list<int> li;
int q,val;
cin>>q;
string s;
for(int i=0;i<q;i++){
cin>>s;
  if(s=="reverse"){
      if(reverse==0){
        reverse=1;
     }else{
        reverse=0;
     }
      continue;
  }

 

   if(reverse==0){
       
       if(s=="toFront"){
           cin>>val;
           li.push_front(val);
       }else if(s=="push_back"){
           cin>>val;
           li.push_back(val);
       }else if(s=="back"){
           if(li.empty()){
               cout<<"No job for Ada?"<<endl;
   
           }else{
              cout<<li.back()<<endl;
              li.pop_back();
           }
       }else if(s=="front"){
           if(li.empty()){
               cout<<"No job for Ada?"<<endl;
   
           }else{
           cout<<li.front()<<endl;
           li.pop_front();
           }
       } 
  
   }else{

       if(s=="toFront"){
           cin>>val;
           li.push_back(val);
       }else if(s=="push_back"){
           cin>>val;
           li.push_front(val);
       }else if(s=="back"){
           if(li.empty()){
               cout<<"No job for Ada?"<<endl;
   
           }else{
           cout<<li.front()<<endl;
           li.pop_front();
          }
       }else if(s=="front"){
      
         if(li.empty()){
               cout<<"No job for Ada?"<<endl;
   
           }else{
           cout<<li.back()<<endl;
           li.pop_back();
          }
       } 

   }
   
 
      
 
}

return 0;
}
