#include<bits/stdc++.h> 
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> q;
    

    int i=0;
   
    deque<int>::iterator it;
    for(;i<k;i++){

        while(!q.empty() &&arr[i]>=arr[q.back()]){
           q.pop_back();
        }
         q.push_back(i);
    }
    for(;i<n;i++){
        cout<<arr[q.front()]<<" ";

       while(!q.empty()&&q.front()<=i-k){
            q.pop_front();
       }  

       while(!q.empty() &&arr[i]>=arr[q.back()]){
              q.pop_back();
       }
       
       q.push_back(i);
    }
   
    cout<<arr[q.front()]<<" ";
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
