#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    vector<vector<int>> grid(n,vector<int>(n,0));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>grid[i][j];
	        }
	    }
	    
	    if(grid.size()==0){
	        cout<<0<<endl;
            continue;
        }
        int r=grid.size();
        int c=grid[0].size();
        //cout<<r<<" "<<c<<endl;
        for(int i=1;i<c;i++){
            grid[0][i]+= grid[0][i-1];
        }
        for(int j=1;j<r;j++){
            grid[j][0]+= grid[j-1][0];
        }
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
            }
        }
        
        cout<<grid[r-1][c-1]<<endl;
        
	}
	
	return 0;
}
