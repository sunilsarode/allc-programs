#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  set<int> st;
  vector<int> arr(5005,0);
  for(int i=1;i<=n;i++){
     cin>>arr[i];
     st.insert(arr[i]);
  }
  
  int f=0;
  if(st.size()<=2){
      f=0;
  }else{
     for(int i=1;i<=n;i++){
    	
    
   	int x=arr[i];
        int y=arr[x];
        int z=arr[y]; 
  	       
    	if(x!=y&&y!=z&&x!=z&&z==i){
      	   f=1;
       	   break;
        }
    }

  }

  
  if(f){
    cout<<"YES"<<"\n";
  }else{
    cout<<"NO"<<"\n";
  } 
}
