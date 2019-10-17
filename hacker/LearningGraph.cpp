#include<bits/stdc++.h>
using namespace std;
class Data{
public:
  int index;
  int weight;
  int x;
  int y;
};

bool sortbysec(const Data &a,const Data &b){
   if(a.weight==b.weight)
     return a.index>b.index;
   
       return a.weight>b.weight;
}
int main(){

int n,m,k;
cin>>n>>m>>k;
int weight[n+1];
int index[n+1];
vector<Data> vec[n+1];
for(int i=1;i<=n;i++){
cin>>weight[i];
index[i]=i;
}
int x,y;
for(int i=0;i<m;i++){
 cin>>x>>y;
 Data *d=new Data;
 d->index=index[y];
 d->weight=weight[y];
 d->x=x;
 d->y=y;

 Data *d1=new Data;
 d1->index=index[x];
 d1->weight=weight[x];
 d1->x=y;
 d1->y=x;
 vec[x].push_back(*d);
 vec[y].push_back(*d1);
 
}
for(int i=1;i<=n;i++){
  vector<Data> v=vec[i];
  sort(v.begin(),v.end(),sortbysec);

   vector<Data>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        cout << it->index<<" "<<it->weight<<" "<<it->y<<endl;
    }
if (k > v.size()) {
  cout<<-1<<endl;
}else {
  Data data=v[k-1];
  cout<<data.y<<endl;
}
}
return 0;
}
