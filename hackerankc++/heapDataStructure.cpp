#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int q=0;
    cin>>q;
    while(q-->0){
        priority_queue<int,vector<int>,greater<int>> pq;
        list<int> li;
    
        int a,b;
        cin>>a;
        if(a==1){
            cin>>b;
            pq.push(b);
        }else if(a==2){
            li.clear();
            cin>>b;
            while(pq.size()){
               if(pq.top()!=b){
                  li.push_back(pq.top());
                  pq.pop();
               }else{
                  pq.pop();
               }
               
            }
            for(auto i:li){
               pq.push(i);
            }

        }else{
             cout<<pq.empty()<<endl;;
            //cout<<pq.top()<<endl;
        }

    } 
    return 0;
}
