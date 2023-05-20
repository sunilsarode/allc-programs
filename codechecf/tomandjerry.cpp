#include<bits/stdc++.h>
using namespace std;

// void DFS(int x, int y, vector<vector<int>> &arr1,vector<vector<int>> &visited,int n, int m,int k,int s)
// {
//     if (x>=m || y>=n || x<0 || y<0)
//     {
//         return ;

//     }
//     if (visited[x][y]==1)
//     {
//         return;
//     }
//     if (s>k)
//     {
//         return;
//     }
//     visited[x][y]=1;   
//     DFS(x+1,y,arr1,visited,n,m,s+1,k);
//     DFS(x,y+1,arr1,visited,n,m,s+1,k);
//     DFS(x-1,y,arr1,visited,n,m,s+1,k);
//     DFS(x,y-1,arr1,visited,n,m,s+1,k);

// }
int main()
{
    int t;
    int n,m;
    n=m= 100000;

    cin>>t;
    vector<vector<int>> arr1(n, vector<int>(m));

    while (t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        cout<<"I am in"<<'\n';

        vector<vector<int>> visited(n, vector<int>(m));

        //cout<<arr1.size()<<endl;
        // for(int i = 0; i < arr1.size(); i++)
        // {
        //     for(int j = 0; j < arr1.size(); j++)
        //     {
        //         cout <<arr1[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        //DFS(a,b,arr1,visited,n,m,k,0);

        // if (visited[c-1][d-1]==1)
        // {
        //     cout<<"Yes"<<endl;

        // }
        // else
        // {
        // cout<<"No"<<endl;
        // }
    }
    
    return 0;
}
