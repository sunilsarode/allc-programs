#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int v,int dp[],int n,int index[]){
    
    if(v<0){
        return -1;
    }
    
    if(v==0){
        return 0;
    }
    if(dp[v]!=0){
        return dp[v];
    }
    int m=INT_MAX;
    int k=-1;
    for(int i=0;i<n;i++){
        
        int change=fun(arr,v-arr[i],dp,n,index);
        
        if(change>=0&&m>change){
            m=1+change;
            k=i;
        }
    }
    
    index[v]=k;
    if(m==INT_MAX){
        dp[v]=-1;
    }else{
        dp[v]=m;
        
    }
    return dp[v];
    
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,v;
        cin>>v>>n;
        if(v<1){
            return 0;
        }else{
            
            int arr[n];
            int dp[v+1]={0};
            int index[v+1]={0};
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            
            cout<<fun(arr,v,dp,n,index)<<endl;
            /*for(int i=0;i<v+1;i++){
                cout<<dp[i]<<" ";
            }*/
 
            index[0]=-1;
            /*for(int i=0;i<=v;i++){
                cout<<index[i]<<" ";
            } 
            cout<<endl;*/
            int cv=v;
            while(index[cv]!=-1){
               int newv=arr[index[cv]];
               cout<<newv<<" ";
               cv=cv-newv;
	    }
            cout<<endl;
        }
       
    }
    
    return 0;
}
