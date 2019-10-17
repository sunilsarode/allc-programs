#include<bits/stdc++.h>
using namespace std;

struct Data{
  int val;
  char c;
};

void display(Data &d){
   cout<<d.val<<endl;
   cout<<d.c<<endl;
   d.val=10;
   d.c='b';
}
void display1(Data* d){
  cout<<d->val<<endl;
  cout<<d->c<<endl;
}
void show(Data d){
  cout<<d.val<<endl;
  cout<<d.c<<endl;
}
int main(){

Data d;
d.val=0;
d.c='a';

display(d);
display1(&d);
show(d);
return 0;
}
