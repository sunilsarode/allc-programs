#include<bits/stdc++.h>
using namespace std;

int main(){

int* ptr=new int;

cout<<ptr<<endl;
cout<<*ptr<<endl;
*ptr=10;
cout<<*ptr<<endl;

delete ptr;
return 0;
}
