#include<bits/stdc++.h>
using namespace std;

struct Data{
  int val;
};

int main(){

Data d;
d.val=0;
cout<<d.val<<endl;
struct Data* ptr;
ptr=&d;
ptr->val=2;

cout<<d.val<<endl;
return 0;
}
