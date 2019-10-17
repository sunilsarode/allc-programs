#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
            stack<int> st; //we create stacke to store the indexes 
            int n=heights.size();
            int i=0;
            int maxarea=0;
            while(i<n){
                if(st.empty()||heights[i]>=heights[st.top()]){
                    st.push(i);
                    i++;//we increament i  here only and not ar other place
                    //cout<<i<<endl;
                }else{
                    int tp=st.top();
                    st.pop();
                    maxarea=max(maxarea,heights[tp]*(st.empty()?i:i-1-st.top()));
                }
            }
            
            while(!st.empty()){
                    //cout<<i<<endl;
                    int tp=st.top();
                    st.pop();
                    maxarea=max(maxarea,heights[tp]*(st.empty()?i:i-1-st.top()));
                
            }
            return maxarea;
        }

int main(){
   
   
   int n;
   cin>>n;
   vector<int> h(n);
   for(int i=0;i<n;i++){
      cin>>h[i];
   }
   cout<<largestRectangleArea(h)<<endl;
   return 0;
}
