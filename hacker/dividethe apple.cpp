#include<bits/stdc++.h>
using namespace std;

int main(){


        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int q;
        cin>>q;
        int d;
        while(q-->0){
           cin>>d;
           for(int i=0;i<n;i++){
              v[i]=v[i]/d;
          }   
        }
        
         for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    
    return 0;
}
