#include<bits/stdc++.h>
using namespace std;
int main(){
      vector<vector<int>> v(21,vector<int>(2097152));
    int t;
    cin>>t;
    while(t-->0){

       int n,m;
       cin>>n>>m;
       vector<int> ans(n);
       for(int i=0;i<n;i++){
          //vector<vector<int>> arr(m,vector<int>(3,0));
          int maxdis=INT_MAX;
          int indx=0;;
          for(int j=0;j<m;j++){
             int sum=0;
             int a=0;
             int b=0;
             int c=0;
             cin>>a>>b>>c;
             
             sum+=((100-a)*(100-b)*(100-c));    
             //cout<<sum<<endl;
             if(maxdis>sum){
                 maxdis=sum;
                 indx=j+1;
             }
          }
          
          ans[i]=indx;
       }
        
       for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
       }
       cout<<endl;
       
    }    

    return 0;
}
