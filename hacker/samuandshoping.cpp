#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> dp(3);
        
        for(int d=0;d<n;d++){
           vector<int> newdp(3,INT_MAX);//assuming new cost INT_MAX
           vector<int> arr(3,0);
           for(int i=0;i<3;i++){
              cin>>arr[i];
           }   
           for(int i=0;i<3;i++){
               for(int j=0;j<3;j++){
                   if(i!=j){
                      newdp[j]=min(newdp[j],dp[i]+arr[j]);
                   }
               }
               
           }
           
           
           dp=newdp;
          
        }
        cout<<min(dp[0],min(dp[1],dp[2]))<<"\n";
    }
    
    return 0;
}
