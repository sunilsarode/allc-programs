#include<bits/stdc++.h>

using namespace std;
int main(){
int t=0;
cin>>t;

while(t-->0){

 int n,x;
 cin>>n>>x;
 int c=0;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
    if(x==arr[i]){
       c++;
    }
 }

 if(c==0){
    cout<<-1<<endl;
  }else{
    cout<<c<<endl;
 }
 

}
 
return 0;
}


