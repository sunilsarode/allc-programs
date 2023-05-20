#include<bits/stdc++.h>
using namespace std;

void printAllSubSequence(string abc,string o){
    if(abc==""){
        cout<<o<<"\n";
        return;
    }
    printAllSubSequence(abc.substr(1),o);
    printAllSubSequence(abc.substr(1),o+abc[0]);
}

int main(){
    string abc="abc";
    string o="";
    printAllSubSequence(abc,o);
    return 0;
}

//             abc
  
//         ""/bc   "a"/bc

//     ""/c  "b"/c  "a"/c "ab"/c

// ""/"" "c"/"" "b"/"" "bc"/""  "a"/"" "ac"/"" "ab"/"" "abc"/""