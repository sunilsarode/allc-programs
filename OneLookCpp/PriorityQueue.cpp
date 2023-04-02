#include<bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;

    Student(int i,string n): id(i),name(n) {}
};

struct cmp {
  bool operator()(Student s1,Student s2){
        return s1.name>s2.name;     
  }
};

int main(){

    //max heap
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout<<pq.top()<<"\n";

    //min heap

    priority_queue<int,vector<int>,greater<int>> mq;
    mq.push(1);
    mq.push(2);
    mq.push(3);

    cout<<mq.top()<<"\n";


    priority_queue<Student,vector<Student>,cmp> q;

    q.push(Student(1,"Sunil"));
    q.push(Student(2,"Anil"));
    q.push(Student(3,"Shamal"));

    cout<<q.top().name<<"\n";
    return 0;
}
