#include<bits/stdc++.h>

using namespace std;
int main(){

int n=4;
int k=0;
vector<vector<int>> vec;
for(int i=0;i<n;i++){
   vector<int> v;
   for(int j=0;j<n;j++){
       k++;
       v.push_back(k);
  }
  vec.push_back(v);
}

cout<<vec[0][0]<<endl;
cout<<vec[2].size()<<endl;
for(int i=0;i<vec.size();i++){
   vector<int> in=vec[i];
   for(int j=0;j<in.size();j++){
       cout<<in[j]<<" ";
  }
  cout<<endl;
}



return 0;
}

