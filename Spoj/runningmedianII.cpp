#include<bits/stdc++.h>
using namespace std;

int main(){

int t=0;
scanf("%d",&t);
//cin>>t;
//cout<<t<<endl;
while(t-->0){
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minh;
 while(1){

    int n;
    //cin>>n;
    scanf("%d",&n);
    if(n==0){
        break;
    }else if(n==-1){
        if(maxh.size()>=minh.size()){
            //cout<<maxh.top()<<endl;
            printf("%d\n",maxh.top());
            maxh.pop();
        }else{
            printf("%d\n",minh.top());
            minh.pop();
        }
    }else{

       maxh.push(n);
       minh.push(maxh.top());
       maxh.pop();

       if(maxh.size()<minh.size()){
          maxh.push(minh.top());
          minh.pop();
       }
               
    }

 }
    
}
return 0;
}
