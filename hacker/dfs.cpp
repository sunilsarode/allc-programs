#include <bits/stdc++.h>
 
using namespace std;
vector<int>v[100001];
bool b[100001];
int parent[100001];
void dfs(int s)
{
    int i;
    b[s]=true;
    for(i=0;i<v[s].size();i++)
    {
        if(b[v[s][i]]==false)
        {
            parent[v[s][i]]=s;
            dfs(v[s][i]);
        }
    }
}
int main()
{
    int n,m,ct=0,x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
       cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
 
        if(b[i]==false)
        {
            parent[i]=-1;
            dfs(i);
        }
    }
 
    for(int i=1;i<=n;i++)
    {
        if( parent[i]!=-1)
        {
           if(parent[parent[i]]==-1)
           {
            if(v[i].size()-1>v[parent[i]].size())
            {
                ct++;
            }
           }
           else
           {
               if(v[i].size()>v[parent[i]].size())
            {
                ct++;
            }
           }
 
        }
 
    }
    cout<<ct<<endl;
}
