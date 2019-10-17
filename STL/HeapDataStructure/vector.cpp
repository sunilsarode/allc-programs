#include<bits/stdc++.h>


using namespace std;

void print(vector<int>& vec){
  for(auto i:vec){
    cout<<i<<" ";
  }
  cout<<"End of print"<<endl;
}
int main(){

vector<int> vec;
vec.push_back(5);
vec.push_back(4);
vec.push_back(2);
vec.push_back(6);
vec.push_back(6);
vec.push_back(6);
vec.insert(vec.begin()+3,10);

vec.erase(vec.begin()+vec.size()-1);
print(vec);
vector<int> ::iterator it;

for(it=vec.begin();it!=vec.end();++it){
   cout<<*it<<" ";
}
cout<<endl;
for(auto i:vec){
  cout<<i<<" ";
}
cout<<endl;
for(int i=0;i<vec.size();i++){
  cout<<vec[i]<<" ";
}
cout<<endl;
for(int i=0;i<vec.size();i++){
  cout<<vec.at(i)<<" ";
}
cout<<endl;
vec.pop_back();
for(int i=0;i<vec.size();i++){
  cout<<vec.at(i)<<" ";
}
cout<<endl;
sort(vec.begin(),vec.end());
for(int i=0;i<vec.size();i++){
  cout<<vec[i]<<" ";
}
cout<<endl;

/*sort(vec.begin(),vec.end(),greater<int>());
for(int i=0;i<vec.size();i++){
   cout<<vec[i]<<" ";
}
cout<<endl;*/

vector<int>::iterator lower,upper;
lower=lower_bound(vec.begin(),vec.end(),5);
upper=upper_bound(vec.begin(),vec.end(),5);


cout<<lower-vec.begin()<<endl;
cout<<upper-vec.begin()<<endl;


return 0;
}
