#include<bits/stdc++.h>
using namespace std;

int count_one (int n)
        {
            int c=0;
            while( n )
            {
            n = n&(n-1);
               c++;
            }
            return c;
}

int main(){

int t=0,n;
cin>>t;
while(t-->0){
  cin>>n;
  cout<<count_one(n)<<endl;  
}

return 0;
}
