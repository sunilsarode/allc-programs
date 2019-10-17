#include<bits/stdc++.h>

using namespace std;

struct Data{

   int i;
   int j;
   string s;
   int dis;
};

struct cmp{
   bool operator()(Data d1,Data d2){
         //if(d1.dis==d2.dis){
              //return d2.s.compare(d1.s);
              return strcmp(d1.s.c_str(),d2.s.c_str());  
              //return d2.s>d1.s;    
         //}
         //return d1.dis>d2.dis;              
   }
};

int main(){

priority_queue<Data,vector<Data>,cmp> pq;

Data d;
d.i=0;
d.j=0;
d.s="RRRRDDDD";

Data d1;
d1.i=0;
d1.j=0;
d1.s="DDRRRRDD";

pq.push(d);
pq.push(d1);

while(!pq.empty()){

   cout<<pq.top().s<<endl;
   pq.pop();
}
return 0;
}
