#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    unordered_map<int,int> mp;
    while(q-->0){
        int ty,x,t,k,lt;
        cin>>ty;
        
        if(ty==1){
            cin>>x>>t;
            mp[t]=x;
        }else{
            int sum=0;
            cin>>k>>lt;
            for(int i=1;i<=k;i++){
                if(mp.find(i)!=mp.end()){
                    sum=sum+mp[i];
                }
            }
            cout<<sum<<endl;
        }
        
        
    }
    return 0;
}
