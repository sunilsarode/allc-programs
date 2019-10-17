#include<bits/stdc++.h>
#define max 10000001
using namespace std;

int main(){

ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int *arr=(int *)malloc(max*sizeof(int));

for(int i=0;i<max;i++){
  arr[i]=1;
}
arr[0]=0;
arr[1]=0;
for(int i=2;i*i<max;i++){
  if(arr[i]){
     for(int j=2*i;j<max;j+=i){
        arr[j]=0;         
    }
  }
}
/**vector<int> vec;
vec.push_back(2);
for(int i=3;i<max;i+=2){
   if(arr[i])
     vec.push_back(i);
}
cout<<vec[vec.size()-1];**/
int t;
cin>>t;
while(t-->0){
  int n;
  cin>>n;
  if(arr[n]){
     cout<<n<<endl;
     continue;
  }
   
}

return 0;
}
