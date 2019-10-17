#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int> mp;

int q,i,y;
string x;
cin>>q;

while(q-->0){
 cin>>i;
 if(i==1){
    cin>>x>>y;
    mp[x]+=y;
 }else if(i==2){
    cin>>x;
    mp[x]=0;
 }else{
    cin>>x;
    cout<<mp[x]<<endl;
 }

}


return 0;
}
