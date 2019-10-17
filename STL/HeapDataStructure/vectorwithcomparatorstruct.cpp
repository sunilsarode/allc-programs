#include<bits/stdc++.h>
using namespace std;

struct Data{
   int f;
   char c;
};

bool cmp(Data d1,Data d2){
    return d1.f>d2.f;
}
int main(){

vector<Data> v;

int n;
cin>>n;
int f;
char c; 
for(int i=0;i<n;i++){
   cin>>c>>f;
   
   Data d;
   d.c=c;
   d.f=f;
   v.push_back(d);
}
cout<<endl;
sort(v.begin(),v.end(),cmp);

for(int i=0;i<n;i++){
   cout<<v[i].c<<" "<<v[i].f<<endl;
}
return 0;
}
