#include <bits/stdc++.h>
using namespace std;
#define MAX 500001
#define MOD 1000000007
typedef long long ll;

vector<int> * seive(){
    bool isPrime[MAX];
    vector<int>* prime=new vector<int>();
    
    for(int i=2;i<=MAX;i++){
       isPrime[i]=true; 
    }  
    for(int i=2;i*i<=MAX;i++ ) {
        
        if(isPrime[i]){
            for(int j=i*i; j<=MAX; j+=i ) {
                isPrime[j]=false;
            }
        }
    }
    
    prime->push_back(2);
    for(int i=3; i<=MAX; i+=2 ) {
        if(isPrime[i])
        prime->push_back(i);
    }

     return prime;
    
}
ll ans(int n,vector<int>* & prime){
    ll result=1;
    for(int i=0;prime->at(i)<=n; ++i) {
        int k=prime->at(i);
        ll count=0;
        while(n/k){
            count=(count+(n/k))%MOD;
            k=k*prime->at(i);
        }
        result=(result*((count+1)%MOD))%MOD;
    }

    return result;
}
int main(){
    vector<int> * prime= seive();
    int t=0;
    int n=0;
    cin>>t;
    while(t-->0){
        
        cin>>n;
        cout<<ans(n,prime)<<endl;
    }
    
    return 0;
}

