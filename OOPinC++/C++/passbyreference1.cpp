#include<bits/stdc++.h>

using namespace std;

void fun(int *val){

   *(val)=*val+1;;
}
int main(){

int val=10;

fun(&val);

cout<<val<<endl;
return 0;
}
