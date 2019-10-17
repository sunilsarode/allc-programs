#include<bits/stdc++.h>

using namespace std;


bool findRedundant(string str){

  stack<char> st;

  for(int i=0;i<str.size();i++){
      if(str[i]==')'){
         char attop=st.top();
         st.pop();

         bool redundant=true;
         while(attop!='('){
               
             if(attop=='+'||attop=='*'||attop=='/'||attop=='-'){
                   redundant=false;
             }
           attop=st.top();
           st.pop();
          
         }
         if(redundant){
             return 1;	
         }
        	
      }else{
         st.push(str[i]);
      }
  }

   return 0;
}

int main() 
{ 
    string str = "((a+b))"; 
    cout<<findRedundant(str)<<endl; 
  
    str = "(a+(b)/c)"; 
    cout<<findRedundant(str)<<endl; 
  
    str = "(a+b*(c-d))"; 
    cout<<findRedundant(str)<<endl; 
  
    return 0; 
} 
