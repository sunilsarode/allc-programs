#include<bits/stdc++.h>
using namespace std;
 
typedef long long int  ll; 
int mod=1299709;

int binaryExponentiation(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*binaryExponentiation(x*x,(n-1)/2);
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int l,q;
    cin>>l>>q;

    int n=binaryExponentiation(2,l-1);
    int cn=n;
    //cout<<n<<endl;
    vector<vector<ll>> v(l,vector<ll>(n,0));
    
    int c=1;
    for(int i=0;i<n;i++){
        v[l-1][i]=c;
        c++;
    }
    /*for(int i=0;i<n;i++){
        cout<<v[l-1][i]<<" ";;
    }
    cout<<endl;*/
    n=n/2;
    //cout<<n<<endl;
    for(int i=l-2;i>=0;i--){
        int k=0;
        //cout<<i<<" ";
        for(int j=0;j<n;j++){
            v[i][j]=(v[i+1][k+j]*v[i+1][k+j+1])%mod;
            k++;
        }
        n=n/2;
    }
    //cout<<v[1][1]<<endl;

    int onemorecn=cn;
    for(int i=l-1;i>=0;i--){
         for(int j=1;j<onemorecn;j++){
            v[i][j]=v[i][j-1]+v[i][j];
        }
    }    

    int n1,x,y;
    while(q-->0){

       cin>>n1>>x>>y;
       n1--;
       x--;
       y--;
       ll sum=0;	
       
       if(x==0){
           sum=v[n1][y]%mod;
       }else{
           sum=(v[n1][y]-v[n1][x-1])%mod;
       }
   
       cout<<sum<<endl;
    }
    return 0;
}

