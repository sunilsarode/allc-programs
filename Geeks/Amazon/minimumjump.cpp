#include <bits/stdc++.h>
using namespace std;

struct Data{
  int index;
  int dis;
  int step;
};
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int vis[n]={0};
        
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }

        if(arr[0]==0){
            cout<<-1<<endl;//if start element is zero we can not jump ,so -1
        }else{
          queue<Data> q;
          Data d;
          d.index=0;
          d.dis=arr[0];
          d.step=0;
          q.push(d);
          vis[0]=1;
          int flag=1;
          while(!q.empty()){
             Data f=q.front();
             q.pop();
             
             if(f.index==n-1){
                  cout<<f.step<<endl;
                  flag=0;
                  break;
             }
             int index=f.index+1;
             int dis=f.index+f.dis;
             for(;index<=dis&&index<n;index++){
                 if(vis[index]==0){
                     vis[index]=1;
                     Data newd;
                     newd.dis=arr[index];
                     newd.index=index;
                     newd.step=1+f.step;
                     q.push(newd);
                }
             }
             
          }
          if(flag){
             cout<<-1<<endl;
          }
          
        }
       
    }
    
    return 0;
}
