#include<bits/stdc++.h>
using namespace std;
int calculateMinimumHP(vector<vector<int>>& dungeon) {
	int m = dungeon.size();
	int n = dungeon[0].size();
 
	//init dp table
	
        vector<vector<int>> h(n,vector<int>(m,0));
 
	h[m - 1][n - 1] = max(1 - dungeon[m - 1][n - 1], 1);
 
	//init last row
	for (int i = m - 2; i >= 0; i--) {
		h[i][n - 1] = max(h[i + 1][n - 1] - dungeon[i][n - 1], 1);
	}
 
	//init last column
	for (int j = n - 2; j >= 0; j--) {
		h[m - 1][j] = max(h[m - 1][j + 1] - dungeon[m - 1][j], 1);
	}
 
	//calculate dp table
	for (int i = m - 2; i >= 0; i--) {
		for (int j = n - 2; j >= 0; j--) {
			int down = max(h[i + 1][j] - dungeon[i][j], 1);
			int right =max(h[i][j + 1] - dungeon[i][j], 1);
			h[i][j] = min(right, down);
		}
	}

       for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             cout<<h[i][j]<<" ";
          }
          cout<<endl;
       }
 
	return h[0][0];
}

int  main(){

   int n,m;
   cin>>n>>m;
   vector<vector<int>> arr(n,vector<int>(m,0));
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            cin>>arr[i][j];
       }
   }
  
   cout<<calculateMinimumHP(arr)<<endl;


}
