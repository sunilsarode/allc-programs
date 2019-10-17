#include<bits/stdc++.h>

using namespace std;
int main(){
int t=0;
cin>>t;

while(t-->0){

 int n;
 cin>>n;
 int c=0;
 int arr[n+1];
 for(int i=1;i<=n;i++){
    cin>>arr[i];

    if(arr[i]==i){
      cout<<arr[i]<<" ";
      c++;
   }
 }
 if(c==0)
    cout<<"Not Found"<<endl;
 else
    cout<<endl;

}
 
return 0;
}


