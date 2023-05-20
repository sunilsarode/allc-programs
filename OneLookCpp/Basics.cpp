#include <bits/stdc++.h>
 
using namespace std;
 

void printArr(vector<int>& arr){
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<"\n";
}

void printMap(map<string,int> & mp){
        
        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<"\n";
        }
    
        cout<<"\n";
}

void printSet(set<int> &st){
    for(auto x: st){
        cout<<x<<" ";
    }
    
    cout<<"\n";
}

int main() {
        // Write C++ code here
    
        // map in c++
    
        map<string,int> mp;
    
        mp.insert({"Sunil",1});
        mp.insert({"Anil",2});
        mp.insert({"Sunil",2});

        printMap(mp);

        mp.erase("Sunil");

        printMap(mp);
        //this is set
    
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    
    printSet(st);

    auto itr=st.begin();
    cout<<"first value of the set "<<*itr<<"\n";
    st.erase(itr);
    printSet(st);
    st.erase(2);
    cout<<"set after erasing 2"<<"\n";
    printSet(st);

    //char to int

    char a='1';

    if((a-'0')==1){
        cout<<"yes it is one"<<"\n";
    }
    
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

    //reverse
    reverse(test.begin(),test.end());
    cout<<"after the reverse "<<test<<"\n";
    
    //vector
    vector<int> arr(3,0);
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;

    printArr(arr);
    
    cout<<"\n";
    auto it=find(arr.begin(),arr.end(),3);
    if(it!=arr.end()){
            arr.erase(it);    
    }

    printArr(arr);
    arr.push_back(3);
    

    cout<<"print array before swap"<<"\n";
    printArr(arr);

    swap(arr[0],arr[1]);
    cout<<"print array after swap"<<"\n";
    printArr(arr);
    return 0;
}
