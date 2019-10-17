#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
   
    while(t-->0){
        ll m;
        cin>>m;
        
        ll one=1;
        ll zero=1;
        ll k=0;
         
        if(m==1||m==2){
           if(m==1){
		cout<<0<<" "<<1<<endl;
           }else{
                cout<<1<<" "<<1<<endl;
           }
        }else{
            for(int i=3;i<=m;i++){
                k=one;
                one=zero;
                zero=k+zero;
            }
             cout<<one<<" "<<zero<<endl;
        }
        
    }
    return 0;
}
