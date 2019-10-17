#include<bits/stdc++.h>
using namespace std;
void print(int x,int max);

class  Data{
public:
 int val;
 int index;

};
queue<Data> q;
queue<Data> q1;
int main(){
int n,x,val;
cin>>n>>x;

for(int i=1;i<=n;i++){
 cin>>val;
 Data *data=new Data;
 data->index=i;
 data->val=val;
 q.push(*data);
}

 if(x>q.size()){
   int max=0;
  

   print(x,max);
     
 }else{
   
   int max=0;
   for(int k=0;k<x;k++){

   // if(q.size()<x){
     // print(x,max);
     //}
     //else{

     q1=q;
     int count=0;
     while (count!=x){
        if(max<q.front().val){
            max=q.front().val;  
        }
        q.pop();
       count++;
     }
     q=q1;

      for(int i=0;i<x;i++){
        Data data=q.front();
          if(max==data.val){
            q.pop();
            cout<<data.index<<" ";
         }else{
           q.pop();
           if(data.val==0)
             q.push(data);
            else{
             --data.val;
             q.push(data);
            }
        }
      }
     }
   }

 //}//end else


return 0;
}
void print(int x,int max){

for(int k=0;k<x;k++){
    int max=0;
     q1=q;
     while (!q.empty())
    {
        if(max<q.front().val){
            max=q.front().val;  
        }
        q.pop();
    }
    q=q1; 
    int n=q.size();
    for(int i=0;i<n;i++){
      Data data=q.front();
       if(max==data.val){
           q.pop();
           cout<<data.index<<" ";
       }else{
           q.pop();
           if(data.val==0)
             q.push(data);
           else{
             --data.val;
             q.push(data);
            }
        }
    }
 }
    
}
