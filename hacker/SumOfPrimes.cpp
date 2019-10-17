#include<bits/stdc++.h>
using namespace std;
#define max 1000000
#define gc getchar_unlocked
typedef long long ll;
ll arr[max+1]={0};
ll sarr[max+1]={0};
ll carr[max+1]={0};
void seive();

inline void read(ll &x)
{
    register char c=gc();
    x=0;
    while(c<'0'&&c>'9')
    c=gc();
    while(c>='0'&&c<='9')
    {
      x=10*x+c-48;
      c=gc();
    }
}


int main(){
seive();
sarr[0]=0;
sarr[1]=0;
for(int i=0;i<=max;i++){
  if(arr[i]==0){
      carr[i]=i;
   }
}

for(int i=2;i<=max;i++){
  sarr[i]=sarr[i-1]+carr[i];
}
ll n,l,r;
//cin>>n;
read(n);
while(n-->0){
//cin>>l>>r;
read(l);
read(r);
if(l==1){
cout<<sarr[r]<<endl;
}else if(l==r){
 if(arr[l]==0){
// cout<<l<<endl;
printf("%lld\n",l);
 }
 else{
   //cout<<0<<endl;
printf("%lld\n",0ll);
  }
}else{
 //cout<<sarr[r]-sarr[l-1]<<endl;
printf("%lld\n",sarr[r]-sarr[l-1]);
}
}
/**for(int i=0;i<=50;i++){
  cout<<sarr[i]<<" ";
}**/

return 0;
}
void seive(){
 arr[0]=1;
 arr[1]=1;
 for(int i=2;i*i<=max;i++){
    if(!arr[i]){
      for(int j=i*i;j<=max;j+=i){
          if(!arr[j]){
             arr[j]=1;
         }
     }
   }
 }
}

