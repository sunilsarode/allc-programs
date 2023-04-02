#include<bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;

    Student(int i,string n): id(i),name(n) {}
};


struct cmp{
   bool operator()(Student s1,Student s2){
        return s1.name<s2.name;
   }
};

int main(){

    vector<Student> arr;
    arr.push_back(Student(1,"Sunil"));
    arr.push_back(Student(2,"Anil"));
    arr.push_back(Student(3,"Shamal"));

    sort(arr.begin(),arr.end(),cmp());

    for(auto x:arr){
        cout<<x.id<<" "<<x.name<<"\n";
    }

    return 0;
}