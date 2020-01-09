#include<bits/stdc++.h>
using namespace std;
stack<char> stk;
 
int prece(char c)
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
 
int main()
{
    string str;
    cin>>str;
    int l=str.length();
    string s;
    for(int i=0;i<l;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
        {
            s+=str[i];
        }
        else
        {
            if(str[i]=='(')
            {
                stk.push(str[i]);
            }
            else if( str[i]==')')
            {
                while(!stk.empty() && stk.top()!='(')
                {
                    char c=stk.top();
                    stk.pop();
                    s+=c;
                }
                if(stk.empty()){
                    cout<<"Invalid\n";
                    return 0;
                }else{
                     stk.pop();
                }
                    
                /*if(!stk.empty() && stk.top()!='(')
                {
                    cout<<"invalid\n";
                    return 0;
                }
                else
                    stk.pop();*/
            }
            else
            {
                    while(!stk.empty() && prece(str[i])<=prece(stk.top()))
                          {
                              //cout<<"WTF\n";
                              char c=stk.top();
                              stk.pop();
                              s+=c;
                          }
                          stk.push(str[i]);
            }
        }
    }
    while(!stk.empty())
    {
        char c=stk.top();
        stk.pop();
        s+=c;
    }
    cout<<s<<endl;
}
 
