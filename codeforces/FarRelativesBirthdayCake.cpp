#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){

int n;
cin>>n;

vector<string> a(n);
string s;
for(int i=0;i<n;i++){
   cin>>s;
   a[i]=s;
}
/*cout<<"\n";
for(auto &i:a){
   cout<<i<<"\n";
}*/
ll sum=0;
for(auto &str:a){
   int cc=0;
   for(int i=0;i<str.size();i++){
       if(str[i]=='C'){
          cc++;
       }
   }
   //cout<<cc<<"\n";
   sum+=((cc*(cc-1))/2);
}
//cout<<sum<<"\n";
for(int i=0;i<n;i++){
   int cc=0;
   for(int j=0;j<n;j++){
        if(a[j][i]=='C'){
           cc++;
        }
   }
   sum+=((cc*(cc-1))/2);
}

cout<<sum<<"\n";
return 0;
}
