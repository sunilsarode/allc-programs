#include<bits/stdc++.h>
using namespace std;

int main(){
int t=0;
cin>>t;
while(t-->0){

 int x,y,n,k;
 cin>>x>>y>>k>>n;
 int pi,ci;
 int pr=x-y;
 int lucky=0;
 for(int i=0;i<n;i++){
    cin>>pi>>ci;

    if(pi<pr){
       continue;
    }    

    if(pi>=pr && ci<=k){
        lucky=1;
       
    }
 }
 if(lucky){
    cout<<"LuckyChef"<<endl;
 }else{
    cout<<"UnluckyChef"<<endl;
 } 

}

return 0;
}
