#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
set<string> st;

int n;
cin>>n;
//scanf("%d",&n);
//char arr[6];
string s;
for(int i=0;i<n;i++){
  cin>>s;
  //scanf("%s",arr);
  // s=arr;
  st.insert(s);
}
cout<<st.size()<<endl;
//int size=mp.size();
//printf("%d",size);
set<string>::iterator it;
for(it=st.begin();it!=st.end();it++){
    cout<<*it<<endl;

  //string o=it->first;
  //const char *array = o.c_str();
  //printf("%s\n",array);
}
return 0;
}
