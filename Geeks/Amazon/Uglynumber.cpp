#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define MAX 100000
int main(){

        vector<ll> arr(MAX);
        
          arr[0]=1;
        
          int p2=0;
          int p3=0;
          int p5=0;
        
        /*
        Essentially, we have to multiply the existed ugly numbers by 2, 3 and 5 to get a bigger ugly number, however, if we blindly multiply all the existed numbers by 2, 3 and 5, then the number could grow much faster than needed
Hence, every time we only try to find the next smallest ugly number
Also, since any existed number will be multiplied by 2, 3 and 5 once and only once, otherwise duplicate, we can use a pointer to keep track of where the 2, 3 and 5 are going to multiply in the next step.
Once, we find the next minimum, we can move on the corresponding pointer, otherwise it always stays at the already existed ugly number which would makes pointer useless
        */
        
          for(int i=1;i<MAX;i++){
               arr[i]=min(arr[p2]*2,min(arr[p3]*3,arr[p5]*5));
               if(arr[i]==arr[p2]*2){
                   p2++;
               }
               if(arr[i]==arr[p3]*3){
                   p3++;
               }
               if(arr[i]==arr[p5]*5){
                   p5++;
               }
          }


int t;
cin>>t;
while(t--){

 int n;
 cin>>n;

          if(n<=0){
              cout<<0<<"\n";
              continue;
          }
          if(n==1){
             cout<<1<<"\n";
             continue;
          }
        
          cout<<arr[n-1]<<"\n";
}
return 0;
}

