#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > g;

int dp1[100010], dp2[100010];

void dfs(int curr, int p){
    for(auto it : g[curr]){
        if(it == p){
            continue;
        }
        dfs(it, curr);
        dp1[curr] += min(dp1[it], dp2[it]);
         if(curr==5)
            cout<<dp2[it]<<" "<<dp1[it]<<endl;
        dp2[curr] += dp1[it];
    }
    dp1[curr] += 1;
}

int main(){
    int n;
    cin >> n;
    g.resize(n+1);
    for(int i=0 ; i<n-1 ; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << min(dp1[1], dp2[1]);
    return 0;
}
