#include <bits/stdc++.h>
using namespace std;

using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        //create jump array and fill with INT_MAX
        int jump[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            jump[i]=INT_MAX;
        }
        
        if(arr[0]==0){
            cout<<-1<<endl;//if start element is zero we can not jump ,so -1
        }else{
                    
            jump[0]=0; //we do not require any jump to reach at start
        
            for(int i=1;i<n;i++){//we go to each array cell start from 1
                 for(int j=0;j<i;j++){
                     /*
                         for each j and value at j ,if we can rach to i or 
                         beyond the i and jump[j] shuold be minimum ,
                         it mean we can reach till j in minimum jumps 
                         and hence it value should not be INT_MAX.
                         
                         if so then we simply find minimum betweeen 
                         value at jump[i] and new jump that we can take 
                         as 1+jump[j] and store it at jump[i]
                         
                     */
                    if(j+arr[j]>=i&&jump[j]!=INT_MAX){
                        jump[i]=min(jump[i],1+jump[j]);
                    }
                }
            }
            /*
              if value at least index is n-1, it mean we dont have path 
              to reach at the end ,else we can have path 
            */
            if(jump[n-1]==INT_MAX){ 
                cout<<-1<<endl;
            }else{
                cout<<jump[n-1]<<endl;
            }
        }
       
    }
    
    return 0;
}
