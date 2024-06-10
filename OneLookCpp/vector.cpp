#include<vector>
#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>& arr){
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> arr(3,0);
    arr[0]=1;
    arr[1]=8;
    arr[2]=3;
    arr.push_back(4);
    printVec(arr);
    
    auto it=find(arr.begin(),arr.end(),3);
    
    if(it!=arr.end()){
        arr.erase(it);
    }
    printVec(arr);
    sort(arr.begin(),arr.end());
    printVec(arr);
    sort(arr.begin(),arr.end(),greater<int>());
    printVec(arr);
    arr.pop_back();
    printVec(arr);
    return 0;
}