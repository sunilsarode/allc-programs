#include<bits/stdc++.h>
using namespace std;


int prec(char c)
{
    if(c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else
        return -1;
}
 
string intopos(string s){

   stack<char> st;
   
   //cout<<s<<endl;
   string ans;
   for(int i=0;i<s.size();i++){
     
     //if it is operand
     if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            ans+=s[i];
     }else {

         //you got the open '(' bracket ,push it on stack
         if(s[i]=='('){
              st.push(s[i]);
         }else if(s[i]==')'){//you encounter a ')' close one, so pop everything untill 

              while(!st.empty()&&st.top()!='('){
                   char in=st.top();
                   st.pop();
                   ans+=in;
              }
              if(st.empty()){
                  return "Invalid";
              }else{
                    st.pop();//poping the '(' opening bracket
              }
         }else {//you got the operator
               
             // cout<<"here"<<endl;
              while(!st.empty()&&prec(s[i])<=prec(st.top())){
                  char in=st.top();
                  st.pop();
                  //cout<<in<<endl;
                  if(prec(s[i])==prec(in)&&in=='^'){
                       st.push(in);
                       break;
                  }else{
                
                      ans+=in;
                  }
              }

               st.push(s[i]);	

         }//end of else

     } //end of else 
   
   }//end of for loop

    while(!st.empty()){
        char in=st.top();
        st.pop();
        ans+=in;
    }
 
    return ans;
}
int main(){

int t;
cin>>t;
while(t--){

    string s;
    cin>>s;

    string ans=intopos(s);

    cout<<ans<<endl;
}

return 0;

}

