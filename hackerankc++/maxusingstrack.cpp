#include<bits/stdc++.h>
using namespace std;

struct Data{
   int val;
   int max;
};
int main() {

    stack<Data> st;

    int n;
    cin>>n;
    int t,val;
    while(n--){
      cin>>t;
      //cout<<"t equal to "<<t<<endl;
      if(t==1){
          cin>>val;
          struct Data d;
          d.val=val;
          if(st.empty()){
             d.max=val;
          }else{
             struct Data top=st.top();
             if(top.val<val){
                d.max=val;
             }else{
                d.max=top.val;
             }
          }
          st.push(d); 
      }else if(t==2){
          st.pop();
      }else if(t==3){
         
         struct Data d=st.top(); 
         cout<<d.max<<endl;
      }
    } 
    return 0;
}

