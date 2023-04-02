#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // Write C++ code here
 
    // map in c++
 
    map<string,int> mp;
 
    mp.insert({"Sunil",1});
    mp.insert({"Anil",2});
    mp.insert({"Sunil",2});
 
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<"\n";
    }
 
    cout<<"\n";
 
    //this is set
 
   set<int> st;
   st.insert(1);
   st.insert(2);
   st.insert(3);
 
   for(auto x: st){
       cout<<x<<" ";
   }
 
   cout<<"\n";
 
   //string funtions
 
   int x=stoi("-123");
   cout<<++x<<"\n";
 
   string str=to_string(123);
   cout<<str<<"\n";
 
   //check if char is digit
   if(!isdigit('a')){
       cout<<"Not a digit"<<"\n";
   }
 
   string test="Sunil";
   cout<<test.substr(1,2)<<"\n";//start from index 1and 2 length
 
   if(test.find('S')!=string::npos){
    cout<<"char exist in test"<<"\n";    
   }
 
   //vector
   vector<int> arr(3,0);
   arr[0]=1;
   arr[1]=2;
   arr[2]=3;
 
   for(auto x:arr){
       cout<<x<<" ";
   }
   cout<<"\n";
   auto it=find(arr.begin(),arr.end(),3);
   if(it!=arr.end()){
        arr.erase(it);    
   }
 
    for(auto x:arr){
       cout<<x<<" ";
   }
 
    return 0;
}