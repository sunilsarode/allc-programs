#include<bits/stdc++.h>
using namespace std;

struct Data{
    int r;
    int c;
    int val;
        
};
struct Cmp{
  bool operator()(struct Data d1,struct Data d2){
      return d1.val>d2.val;
  }    
};

int main() {
    
    int an;
    cin>>an;
    vector<vector<int>> vec;
    cin.ignore();
    for(int i=0;i<an;i++){
         int c;
         vector<int> v;
         string line;
         getline(cin, line);
         istringstream iss(line);
         while ( iss >> c) {    
             v.push_back(c);
         }
         vec.push_back(v);        
    }
    /*vector<vector<int> > vec{ { 2, 6, 12 }, 
                              { 1, 9 }, 
                              { 23, 34, 90, 2000 } };*/
    priority_queue<Data,vector<Data>,Cmp> pq;
    
    for(int i=0;i<vec.size();i++){
        
        struct Data d;
        d.r=i;
        d.c=0;
        d.val=vec[i][0];
        pq.push(d);
    }
    vector<int> out;
    while(pq.size()){
        struct Data in=pq.top();
        pq.pop();
        out.push_back(in.val);
        
        int r=in.r;
        int c=in.c;
        if(c+1<vec[r].size()){
            struct Data new_data;
            new_data.r=r;
            new_data.c=c+1;
            new_data.val=vec[r][c+1];
            pq.push(new_data);
        }
    }
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    
    return 0;
}

