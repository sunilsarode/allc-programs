#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
int x,y;
cin>>x>>y;
int c=max(x,y);
vector<string> arr={"","1/1","5/6","2/3","1/2","1/3","1/6"};
cout<<arr[c]<<"\n";

return 0;
}
