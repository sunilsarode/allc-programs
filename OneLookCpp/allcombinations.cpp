
#include <bits/stdc++.h>
using namespace std;


// void fun(string &str,int l,vector<string>& fans){

//     if(l>=str.size()){
//         fans.push_back(str);
//         return;
//     }

//     for(int i=l;i<str.size();i++){
//         swap(str[i],str[l]);
//         fun(str,l+1,fans);
//         swap(str[i],str[l]);
//     }
// }

void fun(string &s,vector<string> &v,vector<string> &f){
    if(s.size()==0){
        v.push_back("");
        return;
    }
    string sub=s.substr(1);
    fun(sub,v,f);
    for(auto x:v){
        f.push_back(s[0]+x);
    }
    for(auto x:f){
        v.push_back(x);
    }
    f.clear();
    
}
int main() {
   
   
    vector<string> v;
    vector<string> ans;
    string str="abc";
    // string sub=str.substr(1);
    // cout<<sub<<"\n";
    fun(str,v,ans);
    
    set<string> st;
    for(auto x:v){
        //cout<<x<<"\n";
        st.insert(x);
    }

    for(auto x:st){
        cout<<x<<"\n";
    }
    // set<string> allCombinatiosn;
    // for(auto x:st){
    //     //cout<<x<<"\n";
    //     vector<string> fans;
    //     fun(x,0,fans);

    //     for(auto val:fans){
    //         allCombinatiosn.insert(val);
    //     }
    // }

    // for(auto val:allCombinatiosn){
    //     cout<<val<<"\n";
    // }


   
    return 0;
}