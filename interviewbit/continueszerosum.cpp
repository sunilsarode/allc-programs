#include<bits/stdc++.h>
using namespace std;
int maxLen(int a[],int n)
{
    map<int,int> mp;
    
    mp[0]=-1;
    //cout<<mp[8]<<endl;
    int sum=0;
    int start=-1;
    int end=-1;
    int maxl=INT_MIN;
    for(int i=0;i<n;i++){
        
        sum=sum+a[i];
        
       // cout<<sum<<" "<<i<<endl;
       
        if(mp.find(sum)==mp.end()){

            //mp.insert({sum,i});
            mp[sum]=i;
        }else{
            
          if(maxl<(i-mp[sum])){
            start=mp[sum]+1;
            end=i;
            maxl=i-mp[sum];
	  
          }
        }
       
    }
    
    /*map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
         cout<<it->first<<" "<<it->second<<endl;
    }*/

    vector<int> v;
    if(start>=0&&end>=0){
         for(int i=start;i<=end;i++){
             v.push_back(a[i]);          
         }
    }
    for(int i=0;i<v.size();i++){
             cout<<v[i]<<" ";          
     }
    return maxl;
    
}

int main(){
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++){
      cin>>arr[i];
   }

   cout<<maxLen(arr,n)<<endl;

}
