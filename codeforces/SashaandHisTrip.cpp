#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

int n,v;
cin>>n>>v;
int c=0;
int i=0;
int d=n-1;
int cost=0;
while(i<n){
       i++;

       if((c+(v-c))<d){
         cost+=(v-c)*i;
         c=c+(v-c);
         d=d-1;
         c--;
       }else if((c+(v-c))==d){
         cost+=(v-c)*i;
         break;
       }else if((c+(v-c))>d){
         cost+=d*i;
         break;
       }

}
cout<<cost<<"\n";
}
