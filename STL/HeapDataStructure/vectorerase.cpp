#include<bits/stdc++.h>
using namespace std;

int main(){


vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);



vec.erase(vec.begin());


for(int i=0;i<vec.size();i++){
   cout<<vec[i]<<endl;
}
return 0;
}
