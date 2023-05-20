#include<bits/stdc++.h>
using namespace std;

int main(){
      
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  	
    int t;
    cin>>t;
    long long n;
    while (t--)
    {
      cin>>n;
      if (n>=0 && n<=5)
      {
          cout<<0<<"\n";
      }
      else if (n==6)
      {
          cout<<1<<"\n";
      }
      else
      {
          if (n%7==0)
          {
              cout<<n/7<<"\n";
          }
          else
          {
              if (n%7==6)
              {
                      cout<<(n/7)+1<<"\n";
              }
              else
              {
                  cout<<n/7<<"\n";
              }

          }

      }  
    }
    return 0;
   
}
