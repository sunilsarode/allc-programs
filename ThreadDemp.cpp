#include<bits/stdc++.h>
#include <thread>
using namespace std;

void foo(int i){
 for(int j=0;j<i;j++){
    cout<<j<<endl;
 }
} 
int main(){

thread th1(foo,3);
th1.join();
return 0;
}


