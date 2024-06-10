#include<vector>
#include<iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main(){
    
    //char to int
    char a='3';
    
    int num= a-'0';
    
    if(num == 3){
        cout<<num<<"\n";
    }
    
    char backToA=num+'0';
    cout<<backToA<<"\n";
    
    //check if char is digit
    if(isdigit(backToA)){
        cout<<"yes it is digit"<<"\n";
    }
    
    //string to integer
    int x=stoi("1234");
    cout<<x<<"\n";
    //interger to string
    string s=to_string(x);
    cout<<s<<"\n";
    
    //substring
    string str="sunil";
    string substring=str.substr(1,2);
    cout<<substring<<"\n";
    
    //find chat it string
    if(str.find('u')!=string::npos){
        cout<<"u exist in the string"<<"\n";
    }
    //revese
    reverse(str.begin(),str.end());
    cout<<str<<"\n";
    sort(str.begin(),str.end());
    cout<<str<<"\n";
    return 0;
}