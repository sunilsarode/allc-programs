#include <set>
#include <iostream>

using namespace std;

void printSet(set<int>& st){
    
    for(auto x: st){
        cout<<x<<" ";
    }
    cout<<"\n";
}

int main(){
    
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(3);
    
    printSet(st);
    
    st.erase(1);
    
    printSet(st);
    
    auto itr=st.begin();
    
    cout<<*itr<<"\n";

    st.erase(itr);
    
    
    return 0;
}