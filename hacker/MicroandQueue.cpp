#include<bits/stdc++.h>
using namespace std;
void enq(int ele);
void deq();
int que[1000]={0};
int f=0;
int r=0;
int main(){
int n,x;
char op;
cin>>n;
for(int i=0;i<n;i++){
cin>>op;

if(op=='E'){
 cin>>x;
 enq(x);
}else{
  deq();
}
}

return 0;
}

void enq(int ele){
 que[r++]=ele;
 cout<<r-f<<endl;
}

void deq(){
   if(f==r){

      cout<<-1<<" "<<0<<endl;
    }else{

         cout<<que[f]<<" ";
         f++;
         cout<<r-f<<endl;

    }


}
