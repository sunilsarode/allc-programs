#include<bits/stdc++.h>

using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 


int n;
while(scanf("%d",&n)!=EOF){
  if(n==0){
   break;
 }

vector<pair<int,int>> vec;
int num;
int arr[n+1];
for(int i=0;i<n;i++){
   scanf("%d",&num);
   arr[i]=num;
   vec.push_back(make_pair(num,i+1));
}

sort(vec.begin(),vec.end());
/*for(int i=0;i<n;i++){
  cout<<vec[i].second<<" "<<vec[i].first<<endl;
}*/
bool var=true;
for(int i=0;i<n;i++){
   if(arr[i]!=vec[i].second){
      var=false;
       break;
 }
}

if(var){
  cout<<"ambiguous"<<endl;
}else{
  cout<<"not ambiguous"<<endl;
}
}

return 0;
}
