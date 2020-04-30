#include<bits/stdc++.h>
using namespace std;

int main(){
    

        int n;
        cin>>n;
        vector<int> dp(3);
        
        for(int d=0;d<n;d++){
           vector<int> newdp(3,0);//assuming new cost INT_MAX
           vector<int> arr(3,0);
           for(int i=0;i<3;i++){
              cin>>arr[i];
           }   
           for(int i=0;i<3;i++){
               for(int j=0;j<3;j++){
                   if(i!=j){
                      newdp[j]=max(newdp[j],dp[i]+arr[j]);
                   }
               }
               
           }
           
           
           dp=newdp;
          
        }
        cout<<max(dp[0],max(dp[1],dp[2]))<<"\n";
    
    
    return 0;
}
