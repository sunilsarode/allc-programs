#include<bits/stdc++.h>

using namespace std;

void fun(int &val){

   val++;
}
int main(){

int val=10;

fun(val);

cout<<val<<endl;
return 0;
}
