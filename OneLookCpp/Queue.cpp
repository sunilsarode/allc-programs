#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int>& q){
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    
    printQueue(q);

    return 0;
}