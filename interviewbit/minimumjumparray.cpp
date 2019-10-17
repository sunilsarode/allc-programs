#include<bits/stdc++.h>
using namespace std;

// 0 1 2 3 4
//[2,3,1,1,4]

struct Data{
   int index;
   int dis;
   int step;
};

//[1,1,1,0,2]
int jump(vector<int>& arr) {
         
          int n=arr.size();
          if(n==0){
              return -1;
          }
          int vis[n]={0};
          queue<Data> q;
          Data d;
          d.index=0;
          d.dis=arr[0];
          d.step=0;
          q.push(d);
          vis[0]=1;
          Data f;
          while(!q.empty()){
             f=q.front();
             q.pop();
             
             if(f.index==n-1){
                  //cout<<f.step<<endl;
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
       return f.step;   
    }
int ans(vector<int>& arr,int n){
  
   if(n==0){
       return -1;
   }

   int currmax=0;
   int lastmax=0;
   int j=0;

   for(int i=0;i<n;i++){
      if(i>lastmax){
          lastmax=currmax;
          j++;
      }

      currmax=max(currmax,i+arr[i]);
   }

   if(lastmax>=n-1){
       return j;
   }
   return -1;
}

int main(){
 
  int n;
  cin>>n;
  vector<int> arr(n);

   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
 
   cout<<ans(arr,n)<<endl; 
  cout<<jump(arr)<<endl; 
  return 0;
}

तुम्ही दोन्ही विषयांवर लक्ष देऊ शकतात . तुमची आवड असेल तर नक्की लक्ष दया . माझ्या वाचनात अशा अशा प्रोफाइल आहेत ,की त्यांना physics and computer science दोन्ही विषय माहीत आहेत. जर तुम्ही physics मध्ये उत्तम काम करू शकलात तर computer science हा विषय सोपा होतो (माझे वयक्तीक मत ). 

पुढील  Dijkstra यांची  आहे ,त्यांनी सुरवातीला physics आणी गणितं  अभ्यासले आहे . खोपा मोठे नाव आहे हे .   

https://en.wikipedia.org/wiki/Edsger_W._Dijkstra

पुढील प्रश्ण आणी उत्तर ही वाचा 

https://qr.ae/TWKwrU
