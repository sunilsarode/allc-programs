#include<bits/stdc++.h>

using namespace std;

vector<int> prevSmaller(vector<int> &A) {
    int n=A.size();
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&st.top()>=A[i]) st.pop();
        if(!st.empty()) ans[i]=st.top();
        st.push(A[i]);
    }
    return ans;
}

vector<int> prevSmall(vector<int>&A){
  int n=A.size();
  vector<int> ans(n,-1);
  for(int i=1;i<n;i++){
     int j=i-1;
     while(j>=0){
          if(A[j]<A[i]){
             ans[i]=A[j];
             break;
          }else{
              j--;
          }
          
     }
  }

  return ans;
}

int main(){
  int n;
  cin>>n;

  vector<int> v(n);
  for(int i=0;i<n;i++){
     cin>>v[i];
  }
 // vector<int> ans=prevSmaller(v);
  vector<int> ans=prevSmall(v);  
cout<<ans.size()<<endl;
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
  return 0;
}

