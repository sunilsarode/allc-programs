#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        string s1,s2;
        cin>>n>>m;
        cin>>s1;
        cin>>s2;
        //cout<<s1<<" "<<s2<<endl;
        int r=s1.size();
        int c=s2.size();
        
        vector<vector<int>> dp(r,vector<int>(c,0));
        
        int max=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(s1[i]==s2[j]){
                    if(i==0||j==0){
                        dp[i][j]=1;              
                    }else{
                        dp[i][j]=1+dp[i-1][j-1];
                        
                    }
                    
                    if(max<dp[i][j]){
                        max=dp[i][j];
                    }
                }
            }
        }
        
        cout<<max<<endl;;
    }
    
    return 0;
}

