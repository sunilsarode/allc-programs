#include <map>
#include <iostream>

using namespace std;

void printMap(map<string,int>& mp){
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<"\n"; 
    }
}


int main(){
    map<string,int> mp;
    mp.insert({"sunil",1});
    mp.insert({"anil",2});
    mp.insert({"nil",3});
    mp["jhon"]=4;

    printMap(mp);
    
    mp.erase("sunil");
    
    if(mp.find("anil") != mp.end()){
        cout<<"anil found in map"<<"\n";
    }
    
    

    return 0;
}